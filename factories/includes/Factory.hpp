#ifndef BOMBERMAN_FACTORY_HPP
#define BOMBERMAN_FACTORY_HPP

#include "Object_factory.hpp"
#include "../../abstracts/includes/Object.hpp"

class Factory : public Object_factory {
public:
	Object *create_object(std::string key, int x, int y, std::vector<std::vector<std::vector<Object*> > > &map, Object_subject *sub);
};

#endif //BOMBERMAN_FACTORY_HPP
