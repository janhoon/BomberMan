#ifndef PROJECT_BOT_HPP
#define PROJECT_BOT_HPP

#include "Object.hpp"
#include <vector>
#include <cstdlib>
#include <deque>

class Bot {
public:
	Bot();
	virtual bool	valid_move(Object *obj) = 0;
	void 			check_moves(std::vector<std::vector<std::deque<Object*> > > *map, int x, int y);
    char			make_move(std::vector<std::vector<std::deque<Object *> > > *map, int x, int y);
	void			check_collision(std::vector<std::vector<std::deque<Object *> > > *map, int x, int y);
	void			reset_moves();
	bool 			ax_x_possible();
	bool 			ax_y_possible();
	char 			translate_move();

protected:
	int		_ax_x;
	int		_ax_y;
	bool	_up;
	bool	_down;
	bool	_left;
	bool	_right;
	int 	_same_ax_per;
	int		_same_dir_per;
	int 	_choice;

};

#endif //PROJECT_BOT_HPP
