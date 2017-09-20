#include "includes/Time.hpp"

bool Time::cool_down() {
	std::chrono::duration<float>	len = std::chrono::high_resolution_clock::now() - _prev;
	if (len.count() < _duration)
		return true;
	_prev = std::chrono::high_resolution_clock::now();
	return false;
}

void Time::set_cool_down(float duration) {
	_duration = duration;
}