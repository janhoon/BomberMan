#include "includes/Factory.hpp"
#include "../objects/includes/Bomberman.hpp"
#include "../objects/includes/Empty.hpp"

        #include <iostream>

Object	*Factory::create_object(std::string key, int x, int y, std::vector<std::vector<Object*> > &map, Object_subject *sub) {
	if (key[0] == 'A') {
        return new Bomberman(x, y, map, sub);
    } else if(key[0] == '0') {
		return new Empty(x, y);
	}
	return nullptr;
}
