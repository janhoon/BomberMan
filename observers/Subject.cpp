#include "includes/Subject.hpp"

void Subject::Attach(Observer *obs) {
	_list.push_back(obs);
}

void Subject::Notify() {
	for (std::vector<Observer*>::iterator it = _list.begin() ; it != _list.end(); ++it)
		(*it)->update();
}
