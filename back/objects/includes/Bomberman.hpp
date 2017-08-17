#ifndef BOMBERMAN2_BOMBERMAN_HPP
#define BOMBERMAN2_BOMBERMAN_HPP

#include "../../abstracts/includes/Object.hpp"
#include "../../abstracts/includes/Object_movable.hpp"
#include "../../observers/includes/Object_subject.hpp"

class Bomberman : public Object, public  Object_movable {
public:
	Bomberman(int x, int y, std::vector<std::vector<Object*> > &map, Object_subject *sub);
	char		get_direction();
	virtual		~Bomberman();
private:
	Bomberman();
};

#endif //BOMBERMAN2_BOMBERMAN_HPP