#ifndef BOMBERMAN_SOFT_WALL_HPP
#define BOMBERMAN_SOFT_WALL_HPP

#include "../../abstracts/includes/Object.hpp"

class Soft_wall : public Object {
public:
	Soft_wall(int x, int y);
	bool 		deadly(std::string object);
};

#endif //BOMBERMAN_SOFT_WALL_HPP
