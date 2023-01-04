//
// Created by Lowell Zima on 1/4/23.
//

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Constructor Animal" << std::endl;
}

Animal::~Animal() {
	std::cout << "Destructor Animal" << std::endl;
}

Animal::Animal ( const Animal &cpy ) {
	*this = cpy;
}

Animal &Animal::operator = ( const Animal & cpy) {
	this->type = cpy.type;
	return (*this);
}

void Animal::setType(std::string type) {
	this-> type = type;
}

std::string Animal::getType() const {
	return (type);
}

void Animal::makeSound() const {}
