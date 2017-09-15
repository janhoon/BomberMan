#include "includes/Subject.hpp"

		#include <iostream>

void Subject::attach(Observer *obs) {
	_list.push_back(obs);
}

bool Subject::notify() {
	unsigned int	explode = 0;

		for (std::list<Observer*>::iterator it = _list.begin() ; it != _list.end(); ++it) {
			if ((*it)->update()) {
				it = _list.erase(it);
				explode++;
			}
		}
	return explode != 0;
}
