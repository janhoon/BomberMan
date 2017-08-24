#include "includes/Map.hpp"

	int main() {
	srand (time(NULL));
	Map map;
	map.read_and_setup("../maps/map1.map");
	map.run();
	std::cout << "Exiting the program" << std::endl;
  return 0;
}
