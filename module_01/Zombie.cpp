//
// Created by Lowell Zima on 11/22/22.
//

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructor Zombie" << std::endl;
	return;
}

Zombie::~Zombie()
{
	std::cout << "Destructor Zombie" << this->_name << std::endl;
	return;
}

