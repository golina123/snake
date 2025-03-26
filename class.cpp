#include <stdio.h>
#include <iostream>
using namespace std;

enum Direction { UP, DOWN, LEFT, RIGHT };

class view// отд класс cpp h file
{
        public:
        view::getname;
        virtual const char *getname()=0;
        view *getview(const char*x);
}

view view::oview():
x(0), y(0)
{
	fd = open;
}
view view::cview()
{
	close(fd);
}


class tview::view //отд h cpp
{
	public:
	const char * getname() override
	{
		return "TView";
	}
	virtual void draw(int x, int y, const char *str)  
	{
		clrscr(x, y);
	        for (int i = 0; i < x + 2; i++)
	        {
		        for (int j = 0; j < y + 2; j++) 
		        {
		 	       if (i == 0 || i == x + 1 || j == 0 || j == y + 1) 
		 	        {
				        printf("#");
               
			        }
		        }
                }
           
	        printf("@");	
       }
}
	virtual void run()
	{
	}


private   
	v = newtview();
        void clv();
        void clrscr()
	{

	}
	void goloxy(int x, int y)
	{
		COORD coord = {x, y};
		SetConsoleCursorPosition(hStdOut, coord);
	}
        void setcolor(int c)
	{

	}
        
while(!final)
{
	draw();
	getchar();

}
struct A
{
	A();
	A_D();
	int foo(int x);
	int A::foo(A*p, int x);
	static void bar()
};
A o;
o.foo(s);
A::bar();

