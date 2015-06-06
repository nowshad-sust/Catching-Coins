#include <graphics.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <mmsystem.h>
#include <fstream>
using namespace std;

void store_high_score(int score);

void story_mode_play(void)
{
    cleardevice();
    settextstyle(0,0,0);
    outtextxy(250,330,"PRESS ANY KEY TO START . . .");
    getch();
    setbkcolor(0);
    char key;
    int random[1000];
    int var_random;

    int j=0;
    while(j<1000)
    {
    random[j] = std::rand()%3;
    j++;
    }

    int x = 400,y=500, bucket_size=70,element_size=50,speed=3;
    int i =50,coin_position1=130,coin_position2=340,coin_position3=620,coin_position;
    int miss=0,caught=0,level_count=1;
    //setfillstyle(SOLID_FILL,YELLOW);
    floodfill(300,300,1);
    settextstyle(0,0,0);
    bar(0,0,800,40);
    setbkcolor(YELLOW);
    setcolor(RED);
    outtextxy(5,10,"Score : ");
    outtextxy(700,10,"Life : 3");
    outtextxy(350,10,"Level : ");

    setfillstyle(SOLID_FILL,BLACK);
    int count = 1,life_remain=3;

    var_random = random[0];
    while(life_remain>0)
    {
        if(var_random==0)
        {
            coin_position=coin_position1;
            readimagefile("img/img16.jpg", coin_position, i, coin_position+element_size, i+element_size);
            bar(coin_position,i-speed,coin_position+element_size+1,i);
        }
        else if(var_random==1)
        {
            coin_position=coin_position2;
            readimagefile("img/img16.jpg", coin_position, i, coin_position+element_size, i+element_size);
            bar(coin_position,i-speed,coin_position+element_size+1,i);
        }
        else if(var_random==2)
        {
            coin_position=coin_position3;
            readimagefile("img/img16.jpg", coin_position, i, coin_position+element_size, i+element_size);
            bar(coin_position,i-speed,coin_position+element_size+1,i);
        }
        readimagefile("img/rename.jpg", x, y, x+bucket_size, y+bucket_size);

            if(kbhit()==1)
            {
            readimagefile("img/rename.jpg", x, y, x+bucket_size, y+bucket_size);

            key=getch();
            if(key=='Q')
            {
                break;
            }

            if(x<630 && (key==77 || key=='d'))
            {
                x+=bucket_size;
                bar(x-bucket_size,y,x,y+bucket_size+1);

            }
            else if(x>100 && (key==75 || key=='a'))
            {
                x-=bucket_size;
                bar(x,y,x+bucket_size+bucket_size,y+bucket_size+1);
            }
            readimagefile("rename.jpg", x, y, x+bucket_size, y+bucket_size);
            }

            if(i>600)
            {
                outtextxy(10,45,"MISSED ! ! !");
                miss++;
                var_random = random[count];
                count++;
                if(count%30==0)
                    speed++;
                i=50;

                if(miss>1&&miss%3==0)
            {
                life_remain--;
            }

            int life_convert = life_remain;
            char life[10];
            itoa (life_convert,life,10);
            outtextxy(768,10,life);
            }
            else if(x<coin_position && (x+bucket_size)>(coin_position+element_size))
            {
                if(i>y&& i+element_size<y+bucket_size)
                {
                    outtextxy(10,45,"CAUGHT ! ! !");
                    //sndPlaySound("coin-drop-1.wav", SND_FILENAME | SND_ASYNC );
                    caught++;
                    var_random = random[count];
                    count++;
                    if(count%30==0)
                        speed++;
                    i=50;

            int score_convert = caught;
            char score [10];
            itoa (score_convert,score,10);
            outtextxy(80,10,score);

                }
            }

            i=i+speed;
    }

    //storing score

    store_high_score(caught);

    //end

    if(key!='Q')
    {
        outtextxy(330,300,"G A M E O V E R ! ! !");
        outtextxy(310,330,"PRESS ANY KEY TO QUIT");
        getch();
    }
    setbkcolor(0);
    cleardevice();
    delay(100);
}
