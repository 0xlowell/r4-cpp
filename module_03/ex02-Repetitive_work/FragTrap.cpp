//
// Created by Lo on 20/12/2022.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_name = name;
	_hit = 100;
	_energy = 100;
	_attack_damage = 30;
	std::cout << "Constructor FragTrap for " << _name << std::endl << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor FragTrap for " << _name << std::endl << std::endl;
}

void FragTrap::highFivesGuys() {
	std::string hi;
	std::cout << _name << "left his hand for high five" << std::endl;
	std::getline(std::cin, hi);
	std::cout << std::endl;
}