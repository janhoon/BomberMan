#ifndef BOMBERMAN_SUBJECT_HPP
#define BOMBERMAN_SUBJECT_HPP

#include <list>
#include "Observer.hpp"
#include "../../objects/includes/Bomb.hpp"

class Subject {
public:
	void			attach(Observer *obs);
	void			remove(Observer *obs);
	bool			notify();
private:
	std::list<Observer*>	_list;
};

#endif //BOMBERMAN_SUBJECT_HPP
