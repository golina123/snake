#pragma once

#include "view.h"

class tview : public view
{
	private:
		void  clscr();
		void cursor();
	        void color(const char *str);	
	public:
		virtual void  draw();

};

