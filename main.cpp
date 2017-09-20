#include "includes/Map.hpp"
#include "includes/Menu.hpp"

int main() {
	srand (time(NULL));
	Menu	m;
	Map map(m.start_menu());
	map.read_and_setup();
	map.read_map();
	map.run();
	std::cout << "Exiting the program" << std::endl;
  return 0;
}
