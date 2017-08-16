#ifndef BOMBERMAN_OBJECT_SUBJECT_HPP
#define BOMBERMAN_OBJECT_SUBJECT_HPP

#include "../../abstracts/includes/Object_movable.hpp"

class Object_subject {
public:
	void	attach(Object_movable *obs);
	void	notify();

private:
	std::vector<Object_movable*> _list;
};

#endif //BOMBERMAN_OBJECT_SUBJECT_HPP
