#ifndef BOMBERMAN2_BOMBERMAN_HPP
#define BOMBERMAN2_BOMBERMAN_HPP

#include "../../abstracts/includes/Object.hpp"
#include "../../abstracts/includes/Object_movable.hpp"
#include "../../abstracts/includes/Time.hpp"
#include "../../observers/includes/Object_subject.hpp"
#include "../../observers/includes/Subject.hpp"
#include "../../objects/includes/Bomb.hpp"

class Bomberman : public Object, public  Object_movable, public Time {
public:
	Bomberman(int x, int y, std::vector<std::vector<std::deque<Object*> > > &map, Object_subject *sub);
	char				get_input();
	virtual				~Bomberman();
	bool 		deadly(std::string object);

private:
	Subject				_sub;
	Object_subject		*_parent_sub;
	std::deque<Bomb*>	_bombs;

};

#endif //BOMBERMAN2_BOMBERMAN_HPP