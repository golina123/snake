#include "tview.h"
#include <stdio.h>
#include <iostream>
using namespace std;

void tview::clscr()
{
	cout<<"\033[H\033[J";
	std::flush(std::cout);
}

void tview::cursor(int *x, int *y)//размер текущего экрана, движение курсора
{
	\033[#;#H
}

void tview::color(const char * color)
{
	
}

void tview::draw()
{
	cout<<"hello \n";
//	 for (int i = 0; i < x + 2; i++)
  //              {
    //                    for (int j = 0; j < y + 2; j++)
      //                  {
        //                       if (i == 0 || i == x + 1 || j == 0 || j == y + 1)
          //                      {
            //                            printf("#");
//
  //                              }
    //                    }
      //          }
}
