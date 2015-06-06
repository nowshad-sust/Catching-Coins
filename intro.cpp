#include<graphics.h>
#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;

void intro(void)
{

    sndPlaySound("sounds/intro.wav", SND_FILENAME | SND_ASYNC );
    int i = 1,x;
    delay(500);
    setcolor(YELLOW);
    settextstyle(6,0,6);
    readimagefile("img/JA.jpg",315,195,485,380);
    while(i<=360)
    {
        arc(400, 300, 0, i++, 100);
        arc(400, 300, 0, i++, 110);
        setfillstyle(1, BLUE);
        if(i>210)
        {
            int points[] = { i-260, 200, i-50, 300, i-260, 400};
            fillpoly(3, points);
            setfillstyle(1, BLUE);
            int points1[] = { 800-i+260, 200, 600-i+250, 300, 800-i+260, 400};
            fillpoly(3, points1);
            int points2[] = {400,100+i-245,300,5+i-320,500,5+i-320};
            fillpoly(3, points2);
        }
        delay(15);
    }
    setcolor(YELLOW);
    sndPlaySound("sounds/J A sports.wav", SND_FILENAME | SND_ASYNC );
    settextstyle(1,0, 2);
    outtextxy(280,470,"JALALIA ARTS");
    delay(3000);
    cleardevice();
    /*settextstyle(0,0,3);
    outtextxy(250,300,"PRESS ANY KEY");
    getch();*/
    cleardevice();
    delay(10);

    sndPlaySound("sounds//coin_drop_sound.wav", SND_FILENAME | SND_ASYNC );

    char img_name[100];
    for(int i=1;i<=100;i=i+2)
    {
        sprintf(img_name,"img//coins falling3//coins falling2 0%d.jpg",i);
        //readimagefile(img_name,0,0,800,250);
        //readimagefile(img_name,0,350,800,600);
        readimagefile(img_name,0,0,800,600);
        delay(15);

    }

    outtextxy(100,270,"LOADING . . .");
    delay(100);
    sndPlaySound("sounds/san andreas.wav", SND_FILENAME | SND_ASYNC | SND_LOOP );
    for( x=50; x<750; x=x+2)
    {
        //bar(50, 300,x, 330);
        bar(x, 300,x+1, 330);
        setfillstyle(1,10);
        delay(15);
    }
    delay(1000);
    settextstyle(0,0,3);
    outtextxy(100,270,"PRESS ANY KEY TO CONTINUE");
    getch();
    //setcolor(BLACK);
    cleardevice();

}
