#include <graphics.h>
#include <iostream>

using namespace std;

void credits(void);
void exit(void);
void game_play();
void level_selection(void);
void high_score(void);
void options(void);

void main_menu(void)
{
    char key;
    setfillstyle(SOLID_FILL,BLACK);
    int x = 70;
    int y=90, t=90;

    while(1)
    {

        readimagefile("img/new-background.jpg", 0, 0, getmaxx(), getmaxy());
        readimagefile("img/star coin.jpg", x, y, x+50, y+50);

        key=getch();

        if(y>90 && (key==72 || key=='w'))
        {
            y=y-t;
            bar(x,y+t,x+50,y+50+t);
            x=x-40;

        }
        else if(y<450 && (key==80 || key=='s'))
        {
            y+=t;
            bar(x,y-t,x+50,y+50-t);
            x=x+40;
        }

        else if(y==90 && key==13)
        {
            level_selection();
            //game_play();
            setfillstyle(SOLID_FILL, BLACK);
        }
        else if(y==180 && key==13)
        {
            options();
        }
        else if(y==270 && key==13)
        {
            high_score();
        }
        else if(y==360 && key==13)
        {
            credits();
        }
        else if(y==450 && key==13)
        {
            exit();
            break;
        }

    }
}
