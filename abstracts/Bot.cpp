#include "includes/Bot.hpp"

	#include <iostream>

Bot::Bot() : _ax_x(0), _ax_y(0), _choice(0) {}

void Bot::reset_moves() {
	_up = false;
	_down = false;
	_left = false;
	_right = false;
}

void Bot::check_moves(std::vector<std::vector<std::deque<Object*> > > *map, int x, int y) {
	reset_moves();
	if ((*map)[y - 1][x][0] && valid_move((*map)[y - 1][x][0])) {
		_up = true;
	}
	if ((*map)[y + 1][x][0] && valid_move((*map)[y + 1][x][0])) {
		_down = true;
	}
	if ((*map)[y][x - 1][0] && valid_move((*map)[y][x - 1][0])) {
		_left = true;
	}
	if ((*map)[y][x + 1][0] && valid_move((*map)[y][x + 1][0])) {
		_right = true;
	}
}

bool Bot::ax_x_possible() {
	return _left || _right;
}

bool Bot::ax_y_possible() {
	return _up || _down;
}

char Bot::translate_move() {
	if (_ax_y == -1)
		return 'u';
	if (_ax_y == 1)
		return 'd';
	if (_ax_x == -1)
		return 'l';
	if (_ax_x == 1)
		return 'r';
	return '\0';
}

void Bot::check_collision(std::vector<std::vector<std::deque<Object *> > > *map, int x, int y) {
	if ((_ax_y == -1 && (*map)[y - 1][x][0] && !valid_move((*map)[y - 1][x][0])) || (_ax_y == 1 && !valid_move((*map)[y + 1][x][0])))
		_ax_y *= -1;
	if ((_ax_x == -1 && valid_move((*map)[y][x - 1][0])) || (_ax_x == 1 && valid_move((*map)[y][x + 1][0]))) { ;
		_ax_x *= -1;
	}
}

char Bot::make_move(std::vector<std::vector<std::deque<Object *> > > *map, int x, int y) {
	if (_choice--)
		return translate_move();
	check_moves(map, x, y);
	if (!_ax_x && !_ax_y) {
		if (ax_x_possible())
			_ax_x = 1 - (2 * (rand() % 2));
		else if (ax_y_possible())
			_ax_y = 1 - (2 * (rand() % 2));
	} else if (rand() % 100 < _same_ax_per || (_ax_x && !ax_y_possible()) || (_ax_y && !ax_x_possible())) {
		if (_ax_x) {
			if (rand() % 100 >= _same_dir_per) {
				_ax_x *= -1;
			}
		} else {
			if (rand() % 100 >= _same_dir_per) {
				_ax_y *= -1;
			}
		}
	} else {
		if (!_ax_x) {
			_ax_x = 1 - (2 * (rand() % 2));
			_ax_y = 0;
		} else {
			_ax_y = 1 - (2 * (rand() % 2));
			_ax_x = 0;
		}
	}
	check_collision(map, x, y);
	_choice = 9;
	return translate_move();
}