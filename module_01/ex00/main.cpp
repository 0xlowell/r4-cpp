//
// Created by Lowell Zima on 11/22/22.
//


#include "Zombie.hpp"

int	main()
{
	std::string name;

	std::cout << "newZombie name:" << std::endl;
	std::getline(std::cin, name);
	randomChump(name);
}
