#ifndef BOMBERMAN2_SQUID_HPP
#define BOMBERMAN2_SQUID_HPP

#include "../../abstracts/includes/Bot.hpp"
#include "../../abstracts/includes/Object.hpp"
#include "../../abstracts/includes/Object_movable.hpp"
#include "../../observers/includes/Object_subject.hpp"

class Squid : public Object, public Object_movable, public Bot {
public:
	Squid();
	virtual ~Squid();
	Squid(int x, int y, std::vector<std::vector<std::vector<Object*> > > &map, Object_subject *sub);
	char		get_input();
	bool 		valid_move(Object *obj);

private:
};

#endif //BOMBERMAN2_SQUID_HPP
