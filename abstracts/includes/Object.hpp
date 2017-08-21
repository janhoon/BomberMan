#ifndef BOMBERMAN_OBJECT_HPP
#define BOMBERMAN_OBJECT_HPP

#include <string>

class Object {
public:
	Object(void);
	Object &	operator=(Object const &src);
	virtual	~Object(void);

	std::string	get_id();
	int			get_x();
	int			get_y();

protected:
	std::string	_id;
	int 		_x;
	int			_y;

};

#endif //BOMBERMAN_OBJECT_HPP
