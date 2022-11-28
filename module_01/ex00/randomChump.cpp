//
// Created by Lowell Zima on 11/22/22.
//
#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie *new_zomb;

	new_zomb = newZombie(name);
	if (new_zomb)
		new_zomb->announce();
	delete new_zomb;
}
