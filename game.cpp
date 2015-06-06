#include <iostream>
#include <graphics.h>
using namespace std;
int promp_mode(void);
void main_menu();

void game(void)
{
    cleardevice();
    readimagefile("img/gaming.jpg",0,0,800,600);
    getch();
}
