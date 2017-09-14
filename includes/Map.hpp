#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include "../factories/includes/Object_factory.hpp"
#include "../factories/includes/Factory.hpp"
#include "../abstracts/includes/Object.hpp"
#include "../observers/includes/Object_subject.hpp"

class Map {
public:
	Map(std::string filename);
	~Map();
	void                     				read_and_setup();
	void									read_map();
	void									run();
	void 									write_to_file();

private:
	std::vector<std::vector<std::deque<Object*> > >		_map;
	Object_subject										_sub;
	std::string											_filename;
};
