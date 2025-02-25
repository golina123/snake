#include <stdio.h>

#include "model.h"
#include "view.h"
int main(int ac, const char *av[])
{

	model m;
	view *v = getview(av[1]); //draw			  
        //v->setmodel(&m);
	//v->run();

}
