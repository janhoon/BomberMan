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
	char 	direction;

	//See possible move
	//70% chance of staying on same x or y movement

	return direction;
}
