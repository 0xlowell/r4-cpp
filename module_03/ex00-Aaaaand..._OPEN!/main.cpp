//
// Created by Lowell Zima on 12/18/22.
//

#include "ClapTrap.hpp"

int main() {
	ClapTrap bob("🧡 Bob");
	ClapTrap bobette("💚 Bobette");

	std::cout << "______________________________________________________________________________________" << std::endl;
	bobette.attack("🧡 Bob");
	std::cout << "______________________________________________________________________________________" << std::endl;
	bob.takeDamage(1);
	std::cout << "______________________________________________________________________________________" << std::endl;
	bob.beRepaired(1);
	std::cout << "______________________________________________________________________________________" << std::endl;
}
