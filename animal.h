//animal h
#pragma once
#include "definition.h"
#include <vector>

enum dir{left, right, up, down};
class snake{

	private:
		dir d_;
		coords h;
		std::vector<definition> a;
	public:
		snake() : d_(right), h(5, 5)
       	{
	       	a.push_back(definition(h, objects::snake_head_right)); }

    		std::vector<definition> move();
    		const std::vector<definition>& get_a() const 
		{ return a;}	
		dir get_dir() const { return d_; }
		void set_dir(const dir& p) {d_ = p;}
    };
