//
// Created by Lowell Zima on 11/22/22.
//

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructor Zombie" << std::endl;
	return;
}

//Zombie::Zombie(std::string name): _name(name)
//{
//	return;
//}

Zombie::~Zombie()
{
	std::cout << "Destructor: Delete Zombie: " << this->_name << std::endl;
	return;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
	return ;
}

void Zombie::announce() {
	std::cout << this->_name <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}
