#ifndef BOMBERMAN_OBJECT_MOVABLE_HPP
#define BOMBERMAN_OBJECT_MOVABLE_HPP

#include <iostream>
#include <vector>
#include "Object.hpp"

class Object_movable {
public:
	virtual char						get_direction() = 0;
	void								direction();
	void								move();
	void								update();
	void								collision();

protected:
	int									_dir_x;
	int									_dir_y;
	int									*_xp;
	int 								*_yp;
	std::vector<std::vector<Object*> >	*_map;

private:
	void								_up();
	void								_down();
	void								_left();
	void								_right();
	void								_stay();

};

#endif //BOMBERMAN_OBJECT_MOVABLE_HPP
