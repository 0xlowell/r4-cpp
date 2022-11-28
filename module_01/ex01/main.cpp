//
// Created by Lowell Zima on 11/22/22.
//

#include "Zombie.hpp"

int	main()
{
	std::string name;
	std::string n;
	int			nbr;
	Zombie *horde_ptr;

	std::cout << "zombieHorde's name: ";
	std::getline(std::cin, name);
	std::cout << std::endl;

	std::cout << "zombieHorde's number: ";
	std::getline(std::cin, n);
	nbr = std::stoi (n);
	std::cout << std::endl;

	horde_ptr = zombieHorde(nbr, name);

	for (int i = 0; i < nbr; i++)
		horde_ptr[i].announce();
	delete[] horde_ptr;
}
