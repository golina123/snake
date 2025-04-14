//обрабатывает данные из модели и по ним делает соответствующие действия(получает координаты, переменные и т.д)

#include "tview.h"
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <sys/ioctl.h>
#include <cstdlib>
#include <unistd.h>

using namespace std;

tview::tview() //screen size
{
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

void tview::struct_draw (const definition& a)
{

	coords kuda = a.get_pos();
	cursor(kuda.first, kuda.second);
	objects o = a.get_def();
	switch(o)
    	{
        case objects::orange: 
		        get_color(yellow); 
		        cout << "o";
			break;
		
	case objects::apple: 
		        get_color(red);
	                cout <<  "a";
                        break;
                	
        case snake_tail: 
			get_color(green);
		        cout << "?";
                        break;
		 
        case snake_head_up:
		        get_color(green);	
                	cout <<  "ඞ" ;
                        break;
         
        case snake_head_down: 
			get_color(green);
	 		cout <<  "V";
                        break;
        
        case snake_head_right: 
			get_color(green);
			cout <<  ">";
                        break;
              
        case snake_head_left:  
			get_color(green);
			cout <<  "<";
                        break;
	case objects::empty:
			cout << " ";
			break;
        default: return;
    }

}


void tview::run(model& m)
{
	std::vector<definition> to_update;
	while(1) 
	{
		m.rebuild();
		to_update = m.refund();

		for (definition& smth: to_update) {
			struct_draw(smth);
		
		}
		 m.cases();
                
		 cursor(screen_x/2 - 7, screen_y/2);

		std::cout << std::flush;
	}
}
void tview::draw() //all drawing on the screen
{

	 clscr();
         horizontal_ramka(0,0);
         vertical_ramka(0,1);
         vertical_ramka(screen_x, 1);
         horizontal_ramka(0,screen_y-1);

	 cursor(screen_x/2 - 7, screen_y/2);
	
	get_color(green);
	cout<<"Hello I'm a snake\n";

	srand(time(NULL));
	model m;
	run(m);
	
	std::cout << std::flush;

        //coords pos(screen_x/5, screen_y/5);
	
	//coords kuda = model.a.get_pos();
	//cursor(kuda.first + 5 , kuda.second + 5);

        //cout<< kuda.first<< " " << kuda.second <<" " //<< model.a.get_def();


	cout<<"tut bag";

}

