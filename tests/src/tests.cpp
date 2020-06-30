#ifdef TEST_PASS
test "string_test" {

}
#endif

// note: Add a .test file that can be optionally included in the directory which allows a shell command to be executed prior to the test?
// todo: Finalization pass over tokenizer
//          Tokenizer will go into a parse layer which swaps test "foo" { } to an actual function call
//          int test_foo(test_ctx* Ctx) {}
//          these function calls are put into <orig_name>_generated.cpp
//          after tests are compiled and executed the generated files are deleted
//          maybe have the shell command stuff inside of ctx?
// todo: Write and research testing framework!

#include <direct.h>
#include <stdio.h>
#include <stdlib.h>

#include <types.h>
#include <shared.h>
#include <tokenizer.h>
#include <tokenizer.cpp>

string ReadEntireFileIntoMemory(char* FileName) {
    string Result = { };

    FILE* File = fopen(FileName, "r");
	if (File) {
		fseek(File, 0, SEEK_END);
		Result.Count = ftell(File);
		fseek(File, 0, SEEK_SET);

		Result.Data = (u8*)malloc(Result.Count);
		fread(Result.Data, Result.Count, 1, File);

		fclose(File);
	}

    return Result;
}

int main(char** Args, int ArgCount) {
    char* cwd;
	cwd = _getcwd(NULL, 256);
	printf("Operating in directory: %s\n\n", cwd);

    string Contents = ReadEntireFileIntoMemory("../libcommon/src/shared.h");
    tokenizer Tokenizer = Tokenize(Contents, "../libcommon/src/shared.h");

    b32 Parsing = true;
    while (Parsing) {
        token Token = GetToken(&Tokenizer);
        switch (Token.Type) {
        case Token_EndOfStream: {
            Parsing = false;
        } break;

        case Token_Identifier: {

        } break;

        case Token_Unknown:
        default: {

        } break;
        }
    }

    return 1;
}