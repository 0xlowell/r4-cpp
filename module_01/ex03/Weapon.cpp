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

const std::string& Weapon::getType() {
	return (this->_name);
}

void	Weapon::setType(std::string name) {
	this->_name = name;
}



/*
 * const std::string getName() {
 * 		return (this->_name);
 * }
 * Weapon.cpp:16:10: error: invalid use of 'this' outside of a non-static member function
 * 		return (this->_name);
*/

/*
 * void setName(std::string name) {
	this->_name = name;
	return ;
 * }
 * Weapon.cpp:20:2: error: invalid use of 'this' outside of a non-static member function
 *		this->_name = name;
 */

