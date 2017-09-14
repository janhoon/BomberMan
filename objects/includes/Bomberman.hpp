#ifndef BOMBERMAN2_BOMBERMAN_HPP
#define BOMBERMAN2_BOMBERMAN_HPP

#include "../../abstracts/includes/Object.hpp"
#include "../../abstracts/includes/Object_movable.hpp"
#include "../../observers/includes/Object_subject.hpp"
#include "../../observers/includes/Subject.hpp"
#include "../../objects/includes/Bomb.hpp"
//#include <deque>
//#include <vector>

class Bomberman : public Object, public  Object_movable {
public:
	Bomberman(int x, int y, std::vector<std::vector<std::deque<Object*> > > &map, Object_subject *sub);
	char				get_input();
	virtual				~Bomberman();

private:
	Subject				_sub;
	Object_subject		*_parent_sub;
	std::deque<Bomb*>	_bombs;

};

#endif //BOMBERMAN2_BOMBERMAN_HPP