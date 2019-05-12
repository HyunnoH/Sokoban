#include "display.h"

void title(void)
{
    system("clear");
    
    print_bg();

    printxy(34, 8, "S O K O B A N"); 
    printxy(28, 16, "Press Any key to continue");
    getch();
}

void select_map(void)
{
    system("clear");
    print_bg();
    printxy(34, 8, "S O K O B A N");
    printxy(34, 10, "1");
    printxy(34, 12, "2");
    printxy(34, 14, "Custom Map");

    while(1)
    {
        if(tolower(int key = getch()) == 'q')
        {
            system("clear");
            exit(0);
        }
        else
            switch(key)

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
