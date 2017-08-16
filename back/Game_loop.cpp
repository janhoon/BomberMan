#include "includes/Map.hpp"

int main(int argc, char **argv) {
	Map map;
	if (argc == 2)
		map.read_and_setup(argv[1]);
	map.read_map();
	map.run();
  return 0;
}
