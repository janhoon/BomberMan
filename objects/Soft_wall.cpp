#include "includes/Soft_wall.hpp"

Soft_wall::Soft_wall(int x, int y) {
	_x = x;
	_y = y;
	_id = "S";
}

bool Soft_wall::deadly(std::string object) {
	if (!object.compare("F"))
		return true;
	return false;
}