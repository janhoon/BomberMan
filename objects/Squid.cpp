#include "includes/Squid.hpp"

		#include <iostream>

Squid::Squid(int x, int y, std::vector<std::vector<Object*> > &map, Object_subject *sub) {
	std::cout << "Where does ink come from?" << std::endl;
	_x = x;
	_y = y;
	_xp = &_x;
	_yp = &_y;
	_map = &map;
	_id = "B";
	sub->attach(this);
}

Squid::~Squid() {
}

char Squid::get_direction() {
	//Make a choice and then return it
	return make_move();
}
