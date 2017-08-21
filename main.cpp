#include "includes/Map.hpp"

int main() {
	Map map;
	map.read_and_setup("../maps/map1.map");
	map.read_map();
	map.run();
  return 0;
}
