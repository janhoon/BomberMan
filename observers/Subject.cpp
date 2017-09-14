#include "includes/Subject.hpp"

void Subject::attach(Observer *obs) {
	_list.push_back(obs);
}

void Subject::remove(Observer *obs) {
	for (std::list<Observer*>::iterator it = _list.begin() ; it != _list.end(); ++it)
		if (*it == obs) {
			_list.erase(it);
			return;
		}
}

bool Subject::notify() {
	unsigned int	explode = 0;

	for (std::list<Observer*>::iterator it = _list.begin() ; it != _list.end(); ++it)
		explode += (*it)->update();
	return explode != 0;
}
