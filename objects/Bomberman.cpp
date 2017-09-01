#include "includes/Bomberman.hpp"

	#include <iostream>

Bomberman::Bomberman(int x, int y, std::vector<std::vector<Object*> > &map, Object_subject *sub) {
	std::cout << "Bomberman has been born!!!" << std::endl;
	_x = x;
	_y = y;
	_pos_xp = &_pos_x;
	_pos_yp = &_pos_y;
	_xp = &_x;
	_yp = &_y;
	_map = &map;
	_id = "A";
	sub->attach(this);
}

Bomberman::~Bomberman() {
}

char Bomberman::get_input() {
	_sub.Notify();
	if (_bombs.size() < 1 && _x == 1 && _y == 1) {
		_bombs.push_back(new Bomb(_x, _y, 1, &_sub));//place the bomb change id to "T" once the player moves off the bomb, id = "A"
		_id = "T";
	}
	// bomb("X") is added to the map
	return 'd';
}
