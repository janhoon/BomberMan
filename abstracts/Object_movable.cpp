#include "includes/Object_movable.hpp"

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
	_dir_x = 0;
	_dir_y = 0;
	std::cout << "Bob" << std::endl;
	exit(EXIT_SUCCESS);
}

void Object_movable::collision() {
	std::cout << "There was a collision" << std::endl;
//	exit(EXIT_SUCCESS);
}

void	Object_movable::move() {
	Object temp;

	if ((*_map)[*_yp + _dir_y][*_xp + _dir_x] == nullptr) {
		_stay();
	} else if ((*_map)[*_yp + _dir_y][*_xp + _dir_x]->get_id().compare("0")) {
		collision();
	} else {
		temp = *((*_map)[*_yp][*_xp]);
		(*_map)[*_yp][*_xp] = (*_map)[*_yp + _dir_y][*_xp + _dir_x];
		(*_map)[*_yp + _dir_y][*_xp + _dir_x] = &temp;
		*_xp = *_xp + _dir_x;
		*_yp = *_yp +_dir_y;
	}
	read_map();
}

void Object_movable::update() {
	direction();
	move();
}

void Object_movable::read_map() {
	for (size_t y = 0; y < (*_map).size(); y++) {
		for (size_t x = 0; x < (*_map)[y].size(); x++) {
			if ((*_map)[y][x] != nullptr) {
				std::cout << (*_map)[y][x]->get_id() << "	";
			} else {
				std::cout << "w	";
			}
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}