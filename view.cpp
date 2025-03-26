#include <iostream>

#include "view.h"
#include "tview.h"

using namespace std;


view *    view::getview     (const char*x)
{
	 
	cout<<"getview \n";
	return new tview;

}
