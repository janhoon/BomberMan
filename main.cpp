#include "includes/Map.hpp"

int main() {
	srand (time(NULL));
	Map map("../maps/map1.map");
	map.read_and_setup();
	map.read_map();
//	map.run();
	std::cout << "Exiting the program" << std::endl;
  return 0;
}
