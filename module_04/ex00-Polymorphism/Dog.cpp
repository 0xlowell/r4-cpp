//
// Created by Lowell Zima on 1/4/23.
//

#include "Dog.hpp"


Dog::Dog() {
	setType ("dog");
	std::cout << "Constructor Dog" << std::endl;
}

Dog::~Dog() {
	std::cout << "Destructor Dog" << std::endl;
}

Dog::Dog ( const Dog &cpy ) {
	*this = cpy;
}

Dog &Dog::operator = ( const Dog & cpy) {
	this->type = cpy.type;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}
