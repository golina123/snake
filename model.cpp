//model cpp
#include "model.h"
#include <stdio.h>
#include <iostream>
#include <sys/ioctl.h>
#include <cstdlib>
#include <time.h>
#include <unistd.h>
#include <termios.h>
#include <poll.h>

void model::rebuild()  //new pose for all objects
{
	std::vector<definition> tmp;
	
	 for(auto&& sn: s) {
		tmp = sn.move();
		a.insert(a.end(), tmp.begin(), tmp.end());
	 }
        

}
void model::cases()
{
    int poll_res = poll(&io_status_, 1, 150);
    char c;
    if (poll_res != 0)  {
        read(0, &c, sizeof(char));
    }    
    else if (poll_res == -1) {
	    std::cout << "Ebat, YA V AHUE" << std::flush;return;
    }
else {
        std::cout << "Ebaaaat" << std::flush;return; }
    dir d;
        if (c == '\033') {
            if (read(0, &c, 1) == 1 && c == '[') {
                if (read(0, &c, 1) == 1) {
                    switch(c) {
                        case 'A': d = up; break;
                        case 'B': d = down; break;
                        case 'C': d = right; break;
                        case 'D': d = left; break;
                    }
                }
            }
        }
        else {
            switch(c) {
                case 'w': case 'W':  d = up; break;
                case 's': case 'S':  d = down; break;
                case 'a': case 'A':  d = left; break;
                case 'd': case 'D':  d = right; break;
            }
        }
    for(auto&& sn: s)
    {
	    sn.set_dir(d);
    }
}
