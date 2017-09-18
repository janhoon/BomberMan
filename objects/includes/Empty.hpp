#ifndef BOMBERMAN_EMPTY_HPP
#define BOMBERMAN_EMPTY_HPP

#include "../../abstracts/includes/Object.hpp"

class Empty : public Object {
public:
	Empty(int x, int y);
	bool 		deadly(std::string object);
};

#endif //BOMBERMAN_EMPTY_HPP
