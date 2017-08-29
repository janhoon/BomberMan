#include "includes/Squid.hpp"

Squid::Squid() {}

Squid::~Squid() {}

Squid::Squid(int x, int y, std::vector<std::vector<Object*> > &map, Object_subject *sub) {
	std::cout << "Where does ink come from?" << std::endl;
	_x = x;
	_y = y;
	_pos_xp = &_pos_x;
	_pos_yp = &_pos_y;
	_xp = &_x;
	_yp = &_y;
	_map = &map;
	_id = "B";
	sub->attach(this);

	_same_ax_per = 70;
	_same_dir_per = 70;
}

bool Squid::valid_move(Object *obj) {
	if (!obj)
		return false;
	return !obj->get_id().compare("0");
}

char Squid::get_direction() {
	//Make a choice and then return it
	return make_move(_map, _x, _y);
}
