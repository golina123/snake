#include "tview.h"
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <sys/ioctl.h>
#include <cstdlib>
using namespace std;

tview::tview() //screen size
{
        // TIOCGWINSZ
        struct winsize c;
        ioctl(1, TIOCGWINSZ, &c);
        screen_y = c.ws_row;
        screen_x = c.ws_col;

}
void tview::clscr() //cleaning screen
{
        cout<<"\033[H\033[J";
        std::flush(std::cout);
}

void tview::cursor(int x, int y) //move cursor in the point
{
        cout << "\033[" << y << ";" << x << "H";
        std::flush(std::cout);
}


void tview::get_color(enum colors c) //change color
{

                cout<<"\033[3"<<c<<"m";
                std::flush(std::cout);
}

void tview::horizontal_ramka(int x, int y) //print # row
{
        cursor(x, y);
        get_color(white);
        for (int i = 0; i < screen_x; i++)
                 {
                         cout<<"#";
                 }
}
void tview::vertical_ramka(int x, int y) //print # colomn
{
        cursor(x, y);
        get_color(white);
        for (int i = 0; i < screen_y; i++)
                 {
                         cout<<"#";
                         cursor(x, i);
                 }

}

fruit tview::make_fruit(int widht, int height) //random places of fruits
{
        fruit a;
        a.x = 2 + rand() % (widht - 2);
        a.y = 2 + rand() % (height - 2);
        return a;
}

void tview::print_fruit(int n, int m) //printing fruits
{
        for(int i = 0; i < n; i++)
        {
                fruit a = make_fruit(screen_x, screen_y);
                if(a.y != screen_y/2 && a.y != 3 && a.x != 3 )
                {
                        cursor(a.x, a.y);
                        get_color(red);
                        cout<< "a";
                        std::flush(std::cout);
                }
        }

         for(int j = 0; j < m; j++)
        {

                fruit o = make_fruit(screen_x, screen_y);
                if(o.y != screen_y/2 && o.y != 3 && o.x != 3 )
                {
                        cursor(o.x, o.y);
                        get_color(yellow);
                        cout<< "o";
                        std::flush(std::cout);
                }
        }
}

void tview::snake_body(int x, int y)
{
        cursor(x, y);
        get_color(green);
        cout << "(◕‿◕)";

}

void tview::draw() //all drawing on the screen
{

        clscr();

        horizontal_ramka(0,0);
        vertical_ramka(0,1);

        cursor(screen_x/2 - 7, screen_y/2);

        get_color(green);
        cout<<"Hello I'm a snake\n";

        srand(time(NULL));
        snake_body(3, 3);

        int n = rand() % (screen_x * screen_y / 10);
        int m = rand() % (screen_x * screen_y / 10);
        print_fruit(n, m);

        vertical_ramka(screen_x, 1);
        horizontal_ramka(0,screen_y-1);
        cout<<"tut bag";

}
