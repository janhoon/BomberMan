#include "includes/Bomb.hpp"

Bomb::Bomb(int x, int y, int r) {
	std::cout << "Tick tick boom" << std::endl;
	_x = x;
	_y = y;
	_id = "X";
	_radius = r;
	_time = 40;
	_fire_time = 0;
}

Bomb::~Bomb() {
}

bool Bomb::update() {
	//Check when to detonate
	//Make use of actual time and have a standard time for the bomb to blow up.
	std::cout << "I am being updated." << std::endl;
	if (--_time < 0)
		return detonate();
	return false;
}

void Bomb::add(Subject *sub,  std::vector<std::vector<std::deque<Object*> > >	*map) {
	_sub = sub;
	_map = map;
	_sub->attach(this);
}

bool Bomb::fire_hitbox(int x, int y) {
	if (!(*_map)[y][x][0])
		return false;
	(*_map)[y][x][0]->hit("F");
	return (*_map)[y][x][0]->get_id().compare("S") != 0;
}

void Bomb::spread_fire() {
	int		_cor;
	//up
	for (int y = 1; y <= _radius && (_cor = _y - y) > 0 && fire_hitbox(_x, _cor); y++)
		(*_map)[_cor][_x].push_front(new Fire(_x, _cor, _fires));
	//right
	for (int x = 1; x <= _radius && (_cor = _x + x) < (*_map)[_y].size() - 1 && fire_hitbox(_cor, _y); x++)
		(*_map)[_y][_cor].push_front(new Fire(_cor, _y, _fires));
	//down
	for (int y = 1; y <= _radius && (_cor = _y + y) < (*_map).size() - 1 && fire_hitbox(_x, _cor); y++)
		(*_map)[_cor][_x].push_front(new Fire(_x, _cor, _fires));
	//left
	for (int x = 1; x <= _radius && (_cor = _x - x) > 0 && fire_hitbox(_cor, _y); x++)
		(*_map)[_y][_cor].push_front(new Fire(_cor, _y, _fires));
	_fire_time = 5;
}

bool Bomb::fire_burning() {
	if (--_fire_time != 0)
		return false;
	std::vector<Object*>::iterator	it;
	for (it = _fires.begin() ; it != _fires.end(); ++it) {
		(*_map)[(*it)->_y][(*it)->_x].pop_front();
	}
	_fires.clear();
	return true;
}

bool Bomb::detonate() {
	//Detonate will make the bomb destroy it self and replace it self with fire.
	std::cout << "Setting fire" << std::endl;
	if (!_fires.size())
		spread_fire();
	return fire_burning();//When the detonation is finished return true.
	//talk to subject telling it to remove it from everything
}

bool Bomb::deadly(std::string object) {
	return false;
}