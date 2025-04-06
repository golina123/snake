#pragma once

#include "view.h"

enum colors {red = 1, green = 2, white = 7};
class tview : public view
{
	private:
		int screen_x, screen_y;
		void  clscr();
		void cursor(int x, int y);
	        void color(enum colors c);	
		
	public:
		tview();
		void ramka();
		virtual void  draw();

};
