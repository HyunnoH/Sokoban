#include "header.h"
#include "display.h"
#include "game.h"

void play(void);
void option(void);

int main(int argc, char** argv)
{
    title();

    int mod = select_mod();
    while(1)
    {
        switch(mod)
        {
            case 0: play();
                    break;
            case 1:
                    option();
                    break;
            case 2:
            default:
                    {
                        system("clear"); exit(0);
                    }
        }
    }
}

void play(void)
{
    system("clear");

    print_bg();
    
    printxy(34, 8, "S O K O B A N");
    printxy(35, 10, "Select map");
    printxy(30, 14, "1");
    printxy(30, 16, "2");
    printxy(30, 18, "Custom Map");
    int y = 14;

    do{
        putcharxy(48, y, '<');
        int key = getch();
        if(key == ENTER)
        {
            sokoban((y-14)/2);
        }
        else if(key == 'w' && y > 14)
        {
            putcharxy(48, y, ' ');
            y-=2;
        }
        else if(key == 's' && y < 18)
        {
            putcharxy(48, y, ' ');
            y+=2;
        }
    } while(1);
}

void option(void)
{
}
