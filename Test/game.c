#include "Util.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

const char map[20][20] = 
{
    "###################",
    "###################",
    "###################",
    "###################",
    "###################",
    "###################",
    "###################",
    "###################",
    "##   O          .##",
    "## @ O          .##",
    "##   O          .##",
    "###################",
    "###################",
    "###################",
    "###################",
    "###################",
    "###################",
    "###################",
    "###################",
    "###################"
};

char nmap[20][20];
int Rx, Ry;
void Draw(void);
void Move(void);

int main(int argc, char** argv)
{
    system("setterm -cursor off");
    for(int i=0;i<20;i++)
        for(int j=0;j<20;j++)
        {
            gotoxy(j,i);
            putchar(map[i][j]);
        }

    while(1)
    {
        memcpy(nmap, map, sizeof(nmap));
        
        for(int y=0;y<20;y++)
            for(int x=0;x<20;x++)
            {
                if(nmap[y][x] == '@')
                {
                    Rx = x;
                    Ry = y;
                    nmap[y][x] = ' ';
                }
            }
        
        
        system("clear");
        while(1)
        {
            Draw();
            Move();
        }
    }

    return 0;
}

void Draw(void)
{
    int stagex, stagey;

    for(stagey=0;stagey<20;stagey++)
        for(stagex=0;stagex<20;stagex++)
        {
            gotoxy(stagex, stagey);
            putchar(nmap[stagey][stagex]);
        }

    gotoxy(Rx, Ry);
    putchar('@');
}

void Move(void)
{
    int dx, dy;
    char ch = getch();

    if(tolower(ch) == 'q')
    {
        system("setterm -cursor on");
        system("clear");
        exit(0);
    }
    else
    {
        switch(ch)
        {
            case 'w':
                dx = 0;
                dy = -1;
                break;
            case 'a':
                dx = -1;
                dy = 0;
                break;
            case 's':
                dx = 0;
                dy = 1;
                break;
            case 'd':
                dx = 1;
                dy = 0;
                break;
            default:
                break;
        }

        if(nmap[Ry+dy][Rx+dx] == '#')
            return;
        else if(nmap[Ry+dy][Rx+dx] == 'O')
        {
            if(nmap[Ry+2*dy][Rx+2*dx] == '#')
                return;
            else if(nmap[Ry+2*dy][Rx+2*dx] == ' ')
            {
                nmap[Ry+2*dy][Rx+2*dx] = 'O';
                nmap[Ry+dy][Rx+dx] = ' ';
            }
            else if(nmap[Ry+2*dy][Rx+2*dx] == '.')
            {
                nmap[Ry+2*dy][Rx+2*dx] = 'O';
                nmap[Ry+dy][Rx+dx] = '.';
            }
        }

        Rx+=dx;
        Ry+=dy;
    }
}

