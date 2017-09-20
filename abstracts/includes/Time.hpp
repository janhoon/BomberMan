#ifndef BOMBERMAN_TIME_HPP
#define BOMBERMAN_TIME_HPP

#include <chrono>

class Time {
protected:
	bool											cool_down();
	void											set_cool_down(float duration);
	std::chrono::high_resolution_clock::time_point	_prev;
	float											_duration;
};

#endif //BOMBERMAN_TIME_HPP
