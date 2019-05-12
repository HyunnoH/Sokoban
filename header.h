#ifndef _STDIO_H
#define _STDIO_H
#include <stdio.h>
#endif

#ifndef _TERMIOS_H
#define _TERMIOS_H
#include <termios.h>
#endif

#ifndef _STDLIB_H
#define _STDLIB_H
#include <stdlib.h>
#endif

#ifndef _STRING_H
#define _STRING_H
#include <string.h>
#endif

#ifndef _CTYPE_H
#define _CTYPE_H
#include <ctype.h>
#endif

#define ENTER 10
/*=======================================================
 *            Function Declaration
 */

#ifndef _GOTOXY_GETCH
#define _GOTOXY_GETCH
void gotoxy(int x, int y);
int getch(void);
void question_quit(void);
#endif


/*=======================================================
 * Global Variable
 */

