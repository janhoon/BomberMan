#include "includes/Map.hpp"
#include <iostream>

Map::Map(std::string filename) {
	_filename = filename;
}

Map::~Map() {
}

void Map::read_and_setup() {
	std::string					line;
    std::string					temp;
	std::fstream				file = std::fstream(_filename, std::fstream::in);

    for (int y = 0; std::getline(file, line); y++) {
        std::istringstream  	stream(line);
		std::vector<Object*>	row;
        for (int x = 0; std::getline(stream, temp, '\t'); x++) {
            Object_factory  *factory = new Factory;
            Object          *obj = factory->create_object(temp, x, y, _map, &_sub);
			row.push_back(obj);
        }
		_map.push_back(row);
    }
	file.close();
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
	long			index = 0;
	std::fstream	file = std::fstream(_filename, std::fstream::out | std::fstream::in);

	for (size_t y = 0; y < _map.size(); y++) {
		for (size_t x = 0; x < _map[y].size(); x++) {
			if (_map[y][x] != nullptr) {
				file.seekp(index);
				file.write(_map[y][x]->get_id().c_str(), 1);
			}
			index += 2;
		}
	}
	file.close();
}

void Map::run() {
	for (int i = 0; i < 50; i++) {
		_sub.notify();
		read_map();
		write_to_file();
	}
}
