#ifndef BOMBERMAN_OBJECT_FACTORY_HPP
#define BOMBERMAN_OBJECT_FACTORY_HPP

#include "../../abstracts/includes/Object.hpp"
#include "../../observers/includes/Object_subject.hpp"
#include <string>
#include <vector>

class Object_factory {
public:
	virtual Object	*create_object(std::string key, int x, int y, std::vector<std::vector<std::vector<Object*> > > &map, Object_subject *sub) = 0;
};

#endif //BOMBERMAN_OBJECT_FACTORY_HPP
