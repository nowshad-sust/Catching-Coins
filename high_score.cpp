#include <iostream>
#include <fstream>
#include <string>
#include <graphics.h>
using namespace std;

void store_high_score(int score)
{
    //compare the score with high score
    ifstream myFile("score.txt");
    int hs;
    myFile >> hs;
    if(score>hs){
        ofstream highScore("score.txt");
        //iscore=score;
        highScore << score;
        outtextxy(320,200,"HIGH SCORE !!!");
        highScore.close();
    }
}


void high_score(void)
{
    cleardevice();
    ifstream myFile("score.txt");
    int hs;
    myFile >> hs;
    char score [10];
    itoa (hs,score,10);
    settextstyle(6,0,4);
    setbkcolor(8);
    setcolor(14);
    char img_name[100];
    for(int i=1;i<=100;++i)
    {
        sprintf(img_name,"img//Animation - Coin Rain//Animation - Coin Rain 0%d.jpg",i);

        readimagefile(img_name,0,0,800,600);

        delay(5);
    }
        outtextxy(270,180,"BEST SCORE");
        outtextxy(370,250,score);
        delay(1000);

        setbkcolor(0);

    getch();
}
