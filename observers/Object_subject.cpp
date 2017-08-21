#include "includes/Object_subject.hpp"

void Object_subject::attach(Object_movable *obs) {
	_list.push_back(obs);
}

void Object_subject::notify() {
	for (std::vector<Object_movable*>::iterator it = _list.begin() ; it != _list.end(); ++it)
		(*it)->update();
}
