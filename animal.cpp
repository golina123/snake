//animal cpp
#include <termios.h>
#include"animal.h"
#include <unistd.h>

std::vector<definition> snake::move()
{
	std::vector<definition> a;
        a.push_back(definition(h, objects::empty));

	objects repr;

	switch (d_) {
		case left:
                          h.first -= 1;
                          repr = objects::snake_head_left;
                          break;
                case right:
                          h.first += 1;
                          repr = objects::snake_head_right;
                          break;
               case up:
                          h.second -=1;
			  repr = objects::snake_head_up;
			  break;
               case down:
                          h.second += 1;
			  repr = objects::snake_head_down;
                          break;
               default:
                          std::cout << "bread\n";
                          return a;
                     };
                     
	   
	a.push_back(definition(h, repr));
    
	return a;
}
#if 0
void snake::cases()
{
    struct termios oldt, newt;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    char c;
    if (read(STDIN_FILENO, &c, 1) == 1) 
    {
        if (c == '\033') {
            if (read(STDIN_FILENO, &c, 1) == 1 && c == '[') {
                if (read(STDIN_FILENO, &c, 1) == 1) {
                    switch(c) {
                        case 'A': if (d != down) d = up; break;
                        case 'B': if (d != up) d = down; break;
                        case 'C': if (d != left) d = right; break;
                        case 'D': if (d != right) d = left; break;
                    }
                }
            }
        }
        else { 
            switch(c) {
                case 'w': case 'W': if (d != down) d = up; break;
                case 's': case 'S': if (d != up) d = down; break;
                case 'a': case 'A': if (d != right) d = left; break;
                case 'd': case 'D': if (d != left) d = right; break;
            }
        }
    }
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
}
#endif
void make_animal()
{

}
