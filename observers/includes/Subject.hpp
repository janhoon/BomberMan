#ifndef BOMBERMAN_SUBJECT_HPP
#define BOMBERMAN_SUBJECT_HPP

#include <list>
#include "Observer.hpp"

class Subject {
public:
	void			attach(Observer *obs);
	bool			notify();
private:
	std::list<Observer*>			_list;
};

#endif //BOMBERMAN_SUBJECT_HPP
