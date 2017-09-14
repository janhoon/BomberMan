#ifndef BOMBERMAN_SUBJECT_HPP
#define BOMBERMAN_SUBJECT_HPP

#include <vector>
#include "Observer.hpp"

class Subject {
public:
	void	Attach(Observer *obs);
	void	Notify();
private:
	std::vector<Observer*>	_list;
};

#endif //BOMBERMAN_SUBJECT_HPP
