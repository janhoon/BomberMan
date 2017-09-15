#include "includes/Bomb.hpp"

Bomb::Bomb(int x, int y, int r) {
	std::cout << "Tick tick boom" << std::endl;
	_x = x;
	_y = y;
	_id = "X";
	_radius = r;
	_time = 40;
}

Bomb::~Bomb() {
}

bool Bomb::update() {
	//Check when to detonate
	//Make use of actual time and have a standard time for the bomb to blow up.
	std::cout << "I am being updated." << std::endl;
	if (!--_time)
		return detonate();
	return false;
}

void Bomb::add(Subject *sub,  std::vector<std::vector<std::deque<Object*> > >	*map) {
	_sub = sub;
	_map = map;
	_sub->attach(this);
}

bool Bomb::detonate() {
	//Detonate will make the bomb destroy it self and replace it self with fire.
	//Bomb would need to check what the fire touches, since the fire will be to late.
	std::cout << "Setting fire" << std::endl;
	return true;
	//talk to subject telling it to remove it from everything
}