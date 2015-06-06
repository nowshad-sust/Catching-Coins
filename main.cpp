#include <iostream>
#include <graphics.h>
#include <conio.h>
using namespace std;

void intro (void);
int main_menu(void);

int main()
{
    initwindow(800, 600, "Catching Coins (from Nowshad and Nebir)",50, 50, false, false);
    intro();
    main_menu();
    return 0;
}
