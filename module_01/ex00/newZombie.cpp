//
// Created by Lowell Zima on 11/22/22.
//
#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	return (new Zombie(name));
}
