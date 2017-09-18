#ifndef BOMBERMAN_BOMB_HPP
#define BOMBERMAN_BOMB_HPP

#include "../../abstracts/includes/Object.hpp"
#include "../../observers/includes/Observer.hpp"
#include "../../observers/includes/Subject.hpp"
#include "Fire.hpp"
#include <iostream>
#include <deque>
#include <vector>

class Bomb : public Object, public Observer {
public:
	Bomb(int x, int y, int r);
	virtual		~Bomb();
	bool		update();
	void 		add(Subject *sub,  std::vector<std::vector<std::deque<Object*> > >	*map);
	bool		detonate();
	void 		spread_fire();
	bool 		fire_burning();
	bool 		fire_hitbox(int x, int y);
	bool 		deadly(std::string object);

private:
	int 											_fire_time;
	int 											_radius;
	int											 	_time;
	Subject											*_sub;
	std::vector<std::vector<std::deque<Object*> > >	*_map;
	std::vector<Object*>							_fires;
};

#endif //BOMBERMAN_BOMB_HPP
