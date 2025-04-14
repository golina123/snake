//хранит данные о положениях всех объектов игры, знает размеры игрового поля, как змейка двигается, растёт, меняет цвет и т.д
//`стенки, змейки, фрукты,
//model h
#pragma once

#include <utility>
#include <iostream>
#include <string>
#include <vector>
#include "definition.h"
#include "animal.h"
#include <poll.h>
#include <termios.h>
class model{              //save all objects, save all snakes
	private:
		std::vector<definition> a;
		std::vector<snake> s;
		pollfd io_status_{0, POLLIN, 0};
        void __init__() { 
		termios str;

        	cfmakeraw(&str);
        	tcsetattr(0, 0, &str);
	}
	
	
	public:
		model() { 
			s.emplace_back();
			__init__();
		}
		void rebuild();
		std::vector<definition> refund() {
			return a;	
		}


		void cases();
		
};
