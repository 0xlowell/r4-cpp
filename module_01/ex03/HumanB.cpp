//
// Created by Lowell Zima on 11/28/22.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string n): _name(n) {
	return ;
}

HumanB::~HumanB() {
	return ;
}

void	HumanB::setWeapon(Weapon &wp) {
	this->_weapon = &wp;
}


void	HumanB::attack() {
	std::cout << this-> _name << " attacks with his " << this->_weapon->getType() << std::endl;
}
