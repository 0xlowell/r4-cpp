//
// Created by Lowell Zima on 1/4/23.
//

#include "Cat.hpp"


Cat::Cat() {
	setType ("cat");
	std::cout << "Constructor Cat" << std::endl;
}

Cat::~Cat() {
	std::cout << "Destructor Cat" << std::endl;
}

Cat::Cat ( const Cat &cpy ) {
	*this = cpy;
}

Cat &Cat::operator = ( const Cat & cpy) {
	this->type = cpy.type;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Miaou" << std::endl;
}
