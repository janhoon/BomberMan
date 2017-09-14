#include "includes/Bomberman.hpp"

	#include <iostream>

Bomberman::Bomberman(int x, int y, std::vector<std::vector<std::deque<Object*> > > &map, Object_subject *sub) {
	std::cout << "Bomberman has been born!!!" << std::endl;
	_x = x;
	_y = y;
	_pos_xp = &_pos_x;
	_pos_yp = &_pos_y;
	_xp = &_x;
	_yp = &_y;
	_map = &map;
	_id = "A";
	_parent_sub = sub;
	_parent_sub->attach(this);
}

Bomberman::~Bomberman() {
}

char Bomberman::get_input() {
	Bomb	*bomb;
	_sub.Notify();
	if (_bombs.size() < 1 && _x == 1 && _y == 1) {
		bomb = new Bomb(_x, _y, 1);
		bomb->add(&_sub);
		_bombs.push_back(bomb);
		(*_map)[*_yp][*_xp].push_back(dynamic_cast<Object*>(_bombs[_bombs.size() - 1]));
	}
	return 'd';
}
