#pragma once

#include "view.h"
#include <cstdlib>

enum colors {red = 1, green = 2, yellow = 3, blue = 4, pink = 5, cyan = 6, white = 7};

struct fruit{
        int x;
        int y;
};


class tview : public view
{
        private:
                int screen_x, screen_y;
                void  clscr();
                void cursor(int x, int y);
                void get_color(enum colors c);

        public:
                tview();
                void horizontal_ramka(int x, int y);
                void snake_body(int x, int y);
                void vertical_ramka(int x, int y);
                virtual void  draw();
                void print_fruit(int n, int m);
                struct apple{
                              struct fruit a;
                };

                struct orange{
                                struct fruit o;
                };
                fruit make_fruit(int widht, int height);

};
