//
// Created by Lowell Zima on 11/22/22.
//

#include "Zombie.hpp"

Zombie* zombieHorde( int nbr, std::string name )
{
	Zombie* z = new Zombie[nbr];

	for (int i = 0; i < nbr; ++i)
		z[i].setName(name);
	return (z);
}
