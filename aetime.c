#include <stdint.h>

#define global static
#define uint unsigned int
#define u8 uint8_t
#define u32 uint32_t
#define f32 float

#define GenerateMagic(a, b, c, d) (((u32)(a) << 0) | ((u32)(b) << 8) | ((u32)(c) << 16) | ((u32)(d) << 24))

#pragma pack(push, 1)
#define AET_MAGIC_VALUE GenerateMagic('a', 'e', 't', 'c')
typedef struct timer_file_header {
    u32 Magic;
} timer_file_header;

typedef struct timer_file_entry {
    f32 Elapsed;
} timer_file_entry;

typedef struct timer_entry_array {
    u32 EntryCount;
    timer_file_entry* Entries;
} timer_entry_array;
#pragma pack(pop)

// note(jax): Eventually support Mac/Linux...
#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>

int StringLength(char* String) {
    int Count = 0;
    while (*String++) {
        ++Count;
    }
    return Count;
}

bool StringsMatch(char* A, char* B) {
    if (!A || !B) {
        return false;
    }

    while (*A && *B) {
        if (*A != *B){
            return false;
        }

        ++A;
        ++B;
    }

    if (*A != *B){
        return false;
    } else {
        return true;
    }
}

global f32 GlobalFrequency;

#define COUNTERTOMS   1.f / (GlobalFrequency / 1000.f)
#define COUNTERTOUS   COUNTERTOMS * 1000.f
#define COUNTERTONS   COUNTERTOUS * 1000.f
#define COUNTERTOS    COUNTERTOMS / 1000.f

global void Usage(char** Args) {
    fprintf(stderr, "Usage: %s --begin <file>.aet [-v|--v|--verbose|-verbose]\n", Args[0]);
    fprintf(stderr, "       %s --end <file>.aet [-v|--v|--verbose|-verbose]\n", Args[0]);
}

// This function assumes FileName is a full path with an extension
char* GetBaseName(char* FileName) {
    int BaseNameSize = 0;
    char* BaseName = malloc(sizeof(char)*MAX_PATH);
    char* BaseNameBegin = FileName;
    char* BaseNameEnd = FileName + StringLength(FileName);
    bool RightOfPeriod = false;
    for (char* Scan = BaseNameBegin; *Scan; ++Scan) {
        if ((Scan[0] == '\\') || (Scan[0] == '/')) {
            BaseNameBegin = Scan + 1;
        }

        if (Scan[0] == '.') {
            BaseNameEnd = Scan;
            RightOfPeriod = true;
        }
        else if (!RightOfPeriod) {
            ++BaseNameSize;
        }
    }

    memcpy(BaseName, BaseNameBegin, BaseNameSize);
    BaseName[BaseNameSize] = 0;

    return BaseName;
}

int main(int ArgCount, char** Args) {
    bool IsVerbose = false;
    if (StringsMatch(Args[3], "--verbose") ||
        StringsMatch(Args[3], "--v") ||
        StringsMatch(Args[3], "-verbose") ||
        StringsMatch(Args[3], "-v")) {
        IsVerbose = true;
    }

	LARGE_INTEGER _F;
	QueryPerformanceFrequency(&_F);
	GlobalFrequency = (f32)_F.QuadPart;

    char Path[MAX_PATH];
    GetTempPathA(MAX_PATH, Path);

    if (ArgCount >= 3) {
        if (StringsMatch(Args[1], "--begin")) {
            char* FileName = Args[2];
            sprintf(Path, "%s\\%s", Path, FileName);
            FILE* Dest = fopen(Path, "wb");
            if (Dest) {
                if (IsVerbose) {
                    printf("Writing to '%s'\n", Path);
                }

                timer_file_header Header = {0};
                Header.Magic = AET_MAGIC_VALUE;
                fwrite(&Header, sizeof(Header), 1, Dest);

                LARGE_INTEGER Start;
                timer_file_entry Entry = {0};
	            QueryPerformanceCounter(&Start);
                Entry.Elapsed = (f32)Start.QuadPart;	

                printf("Compilation started for %s\n", GetBaseName(FileName));
                if (fwrite(&Entry, sizeof(Entry), 1, Dest) != 1) {
                    fprintf(stderr, "ERROR: Failed to append new start entry to file '%s'.\n", FileName);
                } else {
                    fclose(Dest);
                }
            } else {
                fprintf(stderr, "ERROR: Failed to open file '%s'.\n", FileName);
            }
        } else if (StringsMatch(Args[1], "--end")) {
            char* FileName = Args[2];
            sprintf(Path, "%s\\%s", Path, FileName);

            FILE* Dest = fopen(Path, "rb");
            if (Dest) {
                if (IsVerbose) {
                    printf("Reading from '%s'\n", Path);
                }

                timer_file_header Header = {0};
                fread(&Header, sizeof(Header), 1, Dest);
                if (IsVerbose) {
                    printf("struct timer_file_header {\n    Magic: %u\n};\n", Header.Magic);
                }

                timer_file_entry Entry = {0};
                if(fread(&Entry, sizeof(Entry), 1, Dest) == 1) {
                    LARGE_INTEGER End;
	                QueryPerformanceCounter(&End);

                    f32 Elapsed = ((f32)End.QuadPart) - Entry.Elapsed;
                    f32 Seconds = Elapsed * COUNTERTOS;
                    f32 Milliseconds = Elapsed * COUNTERTOMS;
                    printf("Compilation ended: %f seconds\n", Seconds);
                } else {
                    fprintf(stderr, "ERROR: Failed to read start entry from file '%s'.\n", FileName);
                }

                fclose(Dest);

                if (remove(Path) != 0) {
                    fprintf(stderr, "ERROR: Failed to remove file '%s'.\n", FileName);
                }
            } else {
                fprintf(stderr, "ERROR: Failed to open file '%s'.\n", FileName);
            }
        } else {
            Usage(Args);
        }
    } else {
        Usage(Args);
    }

    return 1;
}