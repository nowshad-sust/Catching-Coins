#include<graphics.h>
#include <iostream>
using namespace std;

void exit(void)
{

    cleardevice();
    readimagefile("img//exit.jpeg",0,0,800,600);
    settextstyle(0,0,3);
    setcolor(8);
    outtextxy(230,340,"THANKS FOR PLAYING");
    outtextxy(200,390,"Press any key to exit");
    getch();

}
