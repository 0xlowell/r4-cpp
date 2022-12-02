//
// Created by Lowell Zima on 11/28/22.
//

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &wp): _name(n) weapon(wp) {
	return ;
}

HumanA::~HumanA() {
	return ;
}

void HumanA::attack(){
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}