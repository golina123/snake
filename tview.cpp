#include "tview.h"
#include <stdio.h>
#include <iostream>
#include <sys/ioctl.h>
using namespace std;

tview::tview()
{
	// TIOCGWINSZ 
	struct winsize c;
	ioctl(1, TIOCGWINSZ, &c);
	screen_y = c.ws_row;
	screen_x = c.ws_col;
	
}
void tview::clscr()
{
	cout<<"\033[H\033[J";
	std::flush(std::cout);
}

void tview::cursor(int x, int y)//размер текущего экрана, движение курсора
{
	cout << "\033[" << y << ";" << x << "H"; // Переместить курсор на (x, y)
        std::flush(std::cout);
}

void tview::color(enum colors c)
{
	 
		cout<<"\033[3"<<c<<"m";
                std::flush(std::cout);
}	
void tview::draw()
{

        clscr();
	ramka();
	cursor(screen_x/2 - 7, screen_y/2);
	color(red);
	//cout<< screen_x<< " "<< screen_y;
	cout<<"Hello I'm a snake\n";
	

}

void tview::ramka()
{
	cursor(0, 0);
	color(white);
        for (int i = 0; i < screen_x; i++)
		 {
			 cout<<"#";
		 }
        cout<<"\n";	

	cursor(screen_y - 2, 0);
	for (int i = 0; i < screen_x; i++)
                 {
                         cout<<"@";
                 }
}

