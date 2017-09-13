#ifndef BOMBERMAN_BOMB_HPP
#define BOMBERMAN_BOMB_HPP

#include "../../abstracts/includes/Object.hpp"
#include "../../observers/includes/Observer.hpp"
#include "../../observers/includes/Subject.hpp"
#include <iostream>

class Bomb : public Object, public Observer {
public:
	Bomb(int x, int y, int r);
	virtual		~Bomb();
	void 		update();
	void 		add(Subject *sub);
	void		detonate();

private:
	int 	_radius;
	int 	_time;
};

#endif //BOMBERMAN_BOMB_HPP
