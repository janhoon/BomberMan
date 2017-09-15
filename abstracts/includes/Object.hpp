#ifndef BOMBERMAN_OBJECT_HPP
#define BOMBERMAN_OBJECT_HPP

#include <string>

class Object {
public:
	Object(void);
	Object &	operator=(Object const &src);
	virtual	~Object(void);

	std::string	get_id();
	int 		get_pos_x();
	int 		get_pos_y();
	int			get_x();
	int			get_y();
	int 		_x;
	int			_y;

protected:
	std::string	_id;
	int 		_pos_x;
	int 		_pos_y;

};

#endif //BOMBERMAN_OBJECT_HPP
