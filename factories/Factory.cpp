#include "includes/Factory.hpp"
#include "../objects/includes/Bomberman.hpp"
#include "../objects/includes/Empty.hpp"
#include "../objects/includes/Squid.hpp"
#include "../objects/includes/Soft_wall.hpp"

        #include <iostream>

Object	*Factory::create_object(std::string key, int x, int y, std::vector<std::vector<std::vector<Object*> > > &map, Object_subject *sub) {
	switch (key[0]) {
		case '0':
			return new Empty(x, y);
		case 'w':
			return nullptr;
		case 'A':
			return new Bomberman(x, y, map, sub);
		case 'B':
			return new Squid(x, y, map, sub);
		case 'S':
			return new Soft_wall(x, y);
		default:
			return nullptr;
	}
}
