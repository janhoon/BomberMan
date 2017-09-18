#ifndef BOMBERMAN_FIRE_HPP
#define BOMBERMAN_FIRE_HPP

#include "../../abstracts/includes/Object.hpp"
#include <vector>

class 	Fire : public Object {
public:
	Fire(int x, int y, std::vector<Object*> &fire);
	bool 		deadly(std::string object);

};

#endif //BOMBERMAN_FIRE_HPP
