#ifndef BOMBERMAN_MENU_HPP
#define BOMBERMAN_MENU_HPP

#include <iostream>
#include <dirent.h>

class Menu {
public:
	std::string 	start_menu();
	std::string 	load_saved_games();
};

#endif //BOMBERMAN_MENU_HPP
