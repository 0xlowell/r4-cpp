//
// Created by Lowell Zima on 11/28/22.
//

#include "Weapon.hpp"

Weapon::Weapon(std::string name): _name(name) {
	return ;
}

Weapon::~Weapon(void) {
	return ;
}

const std::string getType() {
	return (this->_type);
}

void setType(std::string type); {
	this->_type = type;
	return ;
}
