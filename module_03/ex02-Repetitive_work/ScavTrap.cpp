//
// Created by Lowell Zima on 12/19/22.
//

#include "ScavTrap.hpp"
/* ScavTrap::ScavTrap(std::string name): ClapTrap(name): it's how we initialize ScavTrap with his inheritance class ClapTrap */

ScavTrap::ScavTrap(std::string name): ClapTrap(name) { // Initialize ClapTrap as children of ScavTrap
	_hit = 100;
	_energy = 50;
	_attack_damage = 20;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &cpy) {
	this->_name = cpy._name;
	this->_hit = cpy._hit;
	this->_energy = cpy._energy;
	this->_attack_damage = cpy._attack_damage;

	return (*this);
}

void ScavTrap::attack(const std::string &target) {

	if (this->_energy < 0 || this->_hit < 0) {
		std::cout << "No  ⚡️ energy left."
				  << std::endl<< std::endl;
	}
	else {
		std::cout
				<< " ⚔️ ClapTrap " << this->_name
				<< " attacks " << target
				<< ", causing " << this->_attack_damage << " points of damage!"
				<< std::endl << std::endl;

		this->_energy--;
		std::cout << this->_name << " ⚡️ energy: " << this->_energy << std::endl << std::endl;
	}
}
void ScavTrap::guardGate() {
	std::cout << "ScavTrap is in Gate keeper mode" << std::endl;
}
