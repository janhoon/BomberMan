#include "includes/Fire.hpp"

Fire::Fire(int x, int y, std::vector<Object*> &fire) {
	_x = x;
	_y = y;
	_id = "F";
	_pos_x = 0;
	_pos_y = 0;
	fire.push_back(this);
}

bool Fire::deadly(std::string object) {
	return false;
}