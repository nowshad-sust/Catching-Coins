#include <graphics.h>

void game_play(int speed);
void level_1(float speed);
void level_2(float speed);
void level_3(float speed);
void level_selection(void)
{
    cleardevice();

    char key;
    setfillstyle(SOLID_FILL,BLACK);
    int x = 240;
    int y=145, t=70;
    settextstyle(6,0,4);
    readimagefile("img/gaming.jpg", 0, 0, getmaxx(), getmaxy());
    outtextxy(290,150,"STORY MODE");
    outtextxy(290,220,"LEVEL - 1");
    outtextxy(290,290,"LEVEL - 2");
    outtextxy(290,360,"LEVEL - 3");

    while(1)
    {


        readimagefile("img/gold-pirate-coin.jpg", x, y, x+45, y+45);

        key=getch();

        if(y>145 && (key==72 || key=='w'))
        {
            y=y-t;
            bar(x,y+t,x+45,y+45+t);

        }
        else if(y<355 && (key==80 || key=='s'))
        {
            y+=t;
            bar(x,y-t,x+45,y+45-t);
        }
        else if(y==145 && key==13)
        {
            setfillstyle(SOLID_FILL, BLACK);
            //story mode
            game_play(3);
            setfillstyle(SOLID_FILL, BLACK);
            break;
        }
        else if(y==215 && key==13)
        {
            setfillstyle(SOLID_FILL, BLACK);
            //level - 1
            level_1(3.0);
            setfillstyle(SOLID_FILL, BLACK);
            break;
        }
        else if(y==285 && key==13)
        {
            setfillstyle(SOLID_FILL, BLACK);
            //level - 2
            level_2(3.5);
            setfillstyle(SOLID_FILL, BLACK);
            break;
        }
        else if(y==355 && key==13)
        {
            setfillstyle(SOLID_FILL, BLACK);
            //level - 3
            level_3(4.0);
            setfillstyle(SOLID_FILL, BLACK);
            break;
        }
        setfillstyle(SOLID_FILL, BLACK);
    }
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(0,0,500);
}
