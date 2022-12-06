//
// Created by Lowell Zima on 11/22/22.
//

#include "Zombie.hpp"
#include <cctype> // isdigit
#include <string> // length


bool my_isdigit(char ch)
{
	return std::isdigit(static_cast<unsigned char>(ch));
}

int	main()
{
	std::string name;
	std::string n;
	int			nbr;
	int 		len;
	Zombie *horde_ptr;

	// Main menu to set name and number in the horde

	// Name
	std::cout << "zombieHorde's name: ";
	std::getline(std::cin, name);
	std::cout << std::endl;
	len = name.length();
	for (int i = 0; i < len; i++)
		if (!std::isalpha(n[i]))
		{
			std::cout << "Name isn't alpha" << std::endl;
			return 1;
		}
	// Number
	std::cout << "zombieHorde's number: ";
	std::getline(std::cin, n);
	len = n.length();
	for (int i = 0; i < len; i++)
		if (!my_isdigit(n[i]))
		{
			std::cout << "nbr isn't digit" << std::endl;
			return 1;
		}
	nbr = std::stoi (n);
	std::cout << std::endl;

	// The mandatory trick
	horde_ptr = zombieHorde(nbr, name);

	for (int i = 0; i < nbr; i++)
		horde_ptr[i].announce();
	delete[] horde_ptr;
}
