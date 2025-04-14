#include "definition.h"
#include <stdio.h>
#include <iostream>
#include <sys/ioctl.h>
#include <cstdlib>
#include <time.h>

using namespace std;

definition::definition() : coord_({0, 0}), object_(orange) {}

std::string definition::object_to_string() const {
    switch(object_)
    {
        case orange: return "orange";
        case apple: return "apple";
        case snake_tail: return "snake_tail";
        case snake_head_up: return "snake_head_up";
        case snake_head_down: return "snake_head_down";
        case snake_head_right: return "snake_head_right";
        case snake_head_left: return "snake_head_left";
        default: return "unknown";
    }

}

void definition::sum()
{
        int x, y, o;
        cin >> x >> y >> o;


        definition a  = definition({x, y}, static_cast<objects>(o));
        coords kuda = a.get_pos();

        cout<< kuda.first<< " " << kuda.second << object_to_string();
}
