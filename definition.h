//definition h
#pragma once

#include <utility>
#include <iostream>
#include <string>
#include <vector>

using coords = std::pair<int, int>;

enum objects {

        orange = 1,
        apple = 2,
        snake_tail = 3,
        snake_head_up = 4,
        snake_head_down = 5,
        snake_head_right = 6,
        snake_head_left = 7,
        empty = 8
};

class definition{
        private:
                coords coord_;
                objects object_;
        public:

                definition();
                definition(coords c, objects o): coord_(c), object_(o) {}
                coords get_pos() const { return coord_; }
                objects get_def() const { return object_; }

                void sum();
                std::string object_to_string() const;
};
