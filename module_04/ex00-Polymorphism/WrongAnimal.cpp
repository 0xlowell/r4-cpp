//
// Created by Lowell Zima on 1/4/23.
//

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal() {
	setType ("It's 🐶 disguise as 😸");
	std::cout << "Constructor WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal ( const WrongAnimal &cpy ) {
	*this = cpy;
}

WrongAnimal &WrongAnimal::operator = ( const WrongAnimal & cpy) {
	this->type = cpy.type;
	return (*this);
}

std::string WrongAnimal::getType() const {
	return (type);
}

void WrongAnimal::setType(std::string type) {
	this->type = type;
}

void WrongAnimal::makeSound() const {
	std::cout << "Wrong Animal sound !" << std::endl;
}
