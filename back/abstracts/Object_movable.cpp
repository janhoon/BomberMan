#include "includes/Object_movable.hpp"

		#include <cstdlib>

void Object_movable::direction() {
	switch (get_direction()) {
		case 'u':
			_up();
			break;
		case 'd':
			_down();
			break;
		case 'l':
			_left();
			break;
		case 'r':
			_right();
			break;
		default:
			_stay();
	}
}

void	Object_movable::_up() {
	_dir_x = 0;
	_dir_y = -1;
}

void	Object_movable::_down() {
	_dir_x = 0;
	_dir_y = 1;
}

void	Object_movable::_left() {
	_dir_x = -1;
	_dir_y = 0;
}

void	Object_movable::_right() {
	_dir_x = 1;
	_dir_y = 0;
}

void	Object_movable::_stay() {
	std::cout << "Not moving" << std::endl;
	_dir_x = 0;
	_dir_y = 0;
	exit(EXIT_SUCCESS);
}

void Object_movable::collision() {
	std::cout << "There was a collision" << std::endl;
	exit(EXIT_SUCCESS);
}

void	Object_movable::move() {
	Object temp;

	if ((*_map)[*_yp + _dir_y][*_xp + _dir_x] == nullptr) {
		_stay();
	} else if ((*_map)[*_yp + _dir_y][*_xp + _dir_x]->get_id().compare("0")) {
		collision();
	} else {
		std::cout << "Moved" << std::endl;
		temp = *((*_map)[*_yp][*_xp]);
		(*_map)[*_yp][*_xp] = (*_map)[*_yp + _dir_y][*_xp + _dir_x];
		(*_map)[*_yp + _dir_y][*_xp + _dir_x] = &temp;
		*_xp = *_xp + _dir_x;
		*_yp = *_yp +_dir_y;
	}
}

void Object_movable::update() {
	direction();
	move();
}