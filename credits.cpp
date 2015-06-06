#include<graphics.h>
#include <iostream>
using namespace std;

void credits(void)
{

    cleardevice();
    readimagefile("img//EndCredits.jpg",0,0,800,500);
    int z = 0,i=-50,speed=1;
    while(!kbhit())
    {
        setfillstyle(SOLID_FILL,BLACK);

        readimagefile("img/barcode1.jpg", i, 510, i+60, 560);

        readimagefile("img/barcode2.jpg", 740-i, 510, 800-i, 560);
        if(i>=800)
        {
            i=-60;
        }
        else{
            bar(i-speed, 510, i, 561);
            bar(740-i+60, 510, 800-i+speed+1, 561);
            i=i+speed;
            }
        //setcolor(z++%15);
        //setbkcolor((z+10)%15);
        settextstyle(6,0,4);
        outtextxy(300,100,"CREDITS");
        //setcolor(z++%15);
        //setbkcolor((z+10)%15);
        settextstyle(5,0,3);
        outtextxy(80,300," Md. Al-amin Nowshad ");
        outtextxy(80,370,"Reg. No - 2012331059");
        outtextxy(400,300," Md. Mustafizur Rahman Nebir ");
        outtextxy(400,370,"Reg. No - 2012331058");

        delay(10);
        if(z>100)
            z=0;
    }
    cleardevice();
    setbkcolor(0);
    getch();
}
