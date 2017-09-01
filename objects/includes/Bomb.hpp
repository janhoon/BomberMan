#ifndef BOMBERMAN_BOMB_HPP
#define BOMBERMAN_BOMB_HPP

#include "../../abstracts/includes/Object.hpp"
#include "../../observers/includes/Observer.hpp"
#include "../../observers/includes/Subject.hpp"
#include <iostream>

class Bomb : public Object, public Observer {
public:
	Bomb(int x, int y, int r, Subject *sub);
	virtual		~Bomb();
	void 		update();
	void		detonate();

private:
	int 	_radius;

};

#endif //BOMBERMAN_BOMB_HPP
