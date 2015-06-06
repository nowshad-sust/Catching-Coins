#include <iostream>
#include <graphics.h>
void game_play(int speed);

void story_mode(void)
{
    cleardevice();
    setfillstyle(SOLID_FILL,BLACK);
    //readimagefile(); //story page
    getch();
    game_play(3);
    cleardevice();
}
