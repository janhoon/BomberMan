#include "includes/Bomb.hpp"

Bomb::Bomb(int x, int y, int r, Subject *sub) {
	std::cout << "Tick tick boom" << std::endl;
	_x = x;
	_y = y;
	_id = "X";
	_radius = r;
	sub->Attach(this);
}

Bomb::~Bomb() {
}

void Bomb::update() {
	//Check when to detonate
	//Make use of actual time and have a standard time for the bomb to blow up.
	std::cout << "I am being updated." << std::endl;
}

void Bomb::detonate() {
	//Detonate will make the bomb destroy it self and replace it self with fire.
	//Bomb would need to check what the fire touches, since the fire will be to late.
}