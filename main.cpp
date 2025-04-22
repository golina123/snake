//changed
#include <stdio.h>
#include "model.h"
#include "view.h"

int main(int ac, const char *av[])
{

	view *v = view::getview(av[1]); //draw			  
        v->draw();
	model m;
        m.rebuild();
        v->run(m);	
	//m.rebuild(v);
        return 0;

	

}
