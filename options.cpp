#include <graphics.h>
#include <iostream>
using namespace std;
void options(void)
{
    cleardevice();
    //readimagefile("img/main_instruction.jpg",0,0,815,850);
    readimagefile("img/explosion-grey-black-design.jpg",0,0,800,600);
        int state=1;
    //pages
            int x=0,y=0,bucket_size_x=800,bucket_size_y=600;
            char key;

            while(1){
            //if(kbhit()==1)
                {
                //readimagefile("img/rename.jpg", x, y, x+bucket_size_x, y+bucket_size_y);

                key=getch();

                if(state==1)
                {
                    if((key==77 || key=='d')||(key==75 || key=='s'))
                    {
                        readimagefile("img/how to play.jpg",0,0,800,600);
                        state=2;
                    }
                }
                else if(state==2)
                {
                    if((key==77 || key=='d')||(key==75 || key=='s'))
                    {
                        readimagefile("img/explosion-grey-black-design.jpg",0,0,800,600);
                        state=1;
                    }
                }
            }
            if(key==13)
                break;
            }
    //loaded
}
