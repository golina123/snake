#pragma once

#include "model.h"
#include "view.h"
#include <cstdlib>

enum colors {red = 1, green = 2, yellow = 3, blue = 4, pink = 5, cyan = 6, white = 7};

struct fruit{
        int x;
        int y;
};

class tview : public view
{
	private:
		int screen_x, screen_y;
		void  clscr();
		void cursor(int x, int y);
	        void get_color(enum colors c);	
		
	public:
		tview();
		void struct_draw (const definition& a);
		void horizontal_ramka(int x, int y);
		void vertical_ramka(int x, int y);
		void draw();
		void run(model& m);

};

