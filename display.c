#include "display.h"

void title(void)
{
    system("clear");
    
    print_bg();

    printxy(34, 8, "S O K O B A N"); 
    printxy(28, 16, "Press Any key to continue");
    getch();
}

int select_mod(void)
{
    system("clear");
    print_bg();

    printxy(34, 8, "S O K O B A N");
    printxy(34, 12, "1. Play");
    printxy(34, 14, "2. Option");
    printxy(34, 16, "3. Exit");

    int y = 12;
    do{
        putcharxy(46, y, '<');
        int key = getch();

        if(key == ENTER){
            break;
        }
        else if(key == 'w' && y > 12)
        {
            putcharxy(46, y, ' ');
            y-=2;
        }
        else if(key == 's' && y < 16)
        {
            putcharxy(46, y, ' ');
            y+=2;
        }
    } while(1);

    return (y-12)/2;
}

void draw_stage(void)
{

}

void print_bg(void)
{
    for(int i = 0; i< 24; i++){
        for(int j = 0; j< 80; j++)
            putchar(title_bg[i][j]);
        putchar('\n');
    }
}

void printxy(int x, int y, char* s)
{
    gotoxy(x, y);
    printf("%s",s);
}

void putcharxy(int x, int y, char c)
{
    gotoxy(x, y);
    putchar(c);
}
const char title_bg[24][80] = 
{
    "+------------------------------------------------------------------------------+",
    "|                                                                              |",
    "|                                                                              |",
    "|                                                                              |",
    "|                                                                              |",
    "|                                                                              |",
    "|                                                                              |",
    "|                                                                              |",
    "|                                                                              |",
    "|                                                                              |",
    "|                                                                              |",
    "|                                                                              |",
    "|                                                                              |",
    "|                                                                              |",
    "|                                                                              |",
    "|                                                                              |",
    "|                                                                              |",
    "|                                                                              |",
    "|                                                                              |",
    "|                                                                              |",
    "|                                                                              |",
    "|                                                                              |",
    "|                                                                              |",
    "+------------------------------------------------------------------------------+",
};
