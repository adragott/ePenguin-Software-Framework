#ifndef _EPENGUIN_DEV_ARM_UTIL_H_
#define _EPENGUIN_DEV_ARM_UTIL_H_

// source -- http://www.highprogrammer.com/alan/windev/visualstudio.html
// Statements like:
//#pragma message(Reminder "Fix this problem!")
// Which will cause messages like:
//C:\Source\Project\main.cpp(47): Reminder: Fix this problem!
// to show up during compiles.  Note that you can NOT use the
// words "error" or "warning" in your reminders, since it will
// make the IDE think it should abort execution.  You can double
// click on these messages and jump to the line in question.
#define Stringize( L )			#L
#define MakeString( M, L )		M(L)
#define $Line									\
	MakeString( Stringize, __LINE__ )
#define Reminder								\
	__FILE__ "(" $Line ") : Reminder: "

#endif
