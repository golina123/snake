#include <stdio.h>

#include "model.h"
#include "view.h"
int main(int ac, const char *av[])
{

	model m;
	view *v = view::getview(av[1]); //draw                 
        v->draw();
        //v->setmodel(&m);
        //v->run();

}
