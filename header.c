#include "header.h"

void gotoxy(int x, int y) 
{
    printf("%c[%d;%df",0x1B,y,x);
}

int getch(void)
{
    int ch;
    struct termios buf, save;
    tcgetattr(0, &save);
    buf = save;
    buf.c_lflag &= ~(ICANON|ECHO);
    buf.c_cc[VMIN] = 1;
    buf.c_cc[VTIME] = 0;
    tcsetattr(0, TCSAFLUSH, &buf);
    ch = getchar();
    tcsetattr(0, TCSAFLUSH, &save);
    return ch;
}

void question_quit(void)
{
    if(tolower(int key = getch()) == 'q')
    {    
        system("clear");
        exit(0);
    }
}
