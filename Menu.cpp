#include "includes/Menu.hpp"

std::string Menu::start_menu() {
	char 	c;
	std::cout << "1. New Game" << std::endl << "2. Load Game" << std::endl;
	std::cin >> c;
	if (c == '2')
		return load_saved_games();
	return "../maps/map1.map";
}

std::string Menu::load_saved_games() {
	DIR *dir;
	dirent *de;

	dir = opendir("maps");
std::cout << "Halllo" << std::endl;
	while((de = readdir(dir)))
	{
		std::cout << de->d_name;
	}
	std::cout << "Halllo" << std::endl;
	return "../maps/map1.map";
}