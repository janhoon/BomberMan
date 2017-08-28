#include "includes/Map.hpp"
#include <iostream>

void Map::read_and_setup(std::string filename) {
	std::string               line;
    std::string               temp;

	_file = std::fstream(filename, std::fstream::in | std::fstream::out);
    for (int y = 0; std::getline(_file, line); y++) {
        std::istringstream  	stream(line);
		std::vector<Object*>	row;
        for (int x = 0; std::getline(stream, temp, '\t'); x++) {
            Object_factory  *factory = new Factory;
            Object          *obj = factory->create_object(temp, x, y, _map, &_sub);
			row.push_back(obj);
        }
		_map.push_back(row);
    }
}

void Map::read_map() {
	for (size_t y = 0; y < _map.size(); y++) {
		for (size_t x = 0; x < _map[y].size(); x++) {
			if (_map[y][x] != nullptr) {
				std::cout << _map[y][x]->get_id() << "	";
			} else {
				std::cout << "w	";
			}
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void Map::write_to_file() {
	long 	index = 0;

	for (size_t y = 0; y < _map.size(); y++) {
		for (size_t x = 0; x < _map[y].size(); x++) {
			if (_map[y][x] != nullptr && !_map[y][x]->get_id().compare("0")) {
				_file.seekp(index);
				_file.write(_map[y][x]->get_id().c_str(), 1);
			}
			index += 2;
		}
	}
}

void Map::run() {
	for (int i = 0; i < 50; i++) {
		read_map();
		_sub.notify();
		write_to_file();
	}
}
