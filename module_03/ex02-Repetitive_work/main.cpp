//
// Created by Lowell Zima on 12/18/22.
//

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main() {
	ClapTrap bob("🧡 Bob");
	ClapTrap bobette("💚 Bobette");
	ScavTrap robot("🤖 ScavTrap Robot");

	std::cout << "______________________________________________________________________________________" << std::endl;
	robot.attack("🧡 Bob");
	std::cout << "______________________________________________________________________________________" << std::endl;
	robot.takeDamage(20);
	std::cout << "______________________________________________________________________________________" << std::endl;
	robot.beRepaired(20);
	std::cout << "______________________________________________________________________________________" << std::endl;
	robot.guardGate();
}
