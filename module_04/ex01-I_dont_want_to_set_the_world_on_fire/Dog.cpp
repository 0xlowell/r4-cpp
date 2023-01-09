//
// Created by Lowell Zima on 1/4/23.
//

#include "Dog.hpp"


Dog::Dog() {
	setType ("dog");
	this->_brain = new Brain();
	std::cout << _brain << std::endl;
	std::cout << "Constructor Dog" << std::endl;
}

Dog::~Dog() {
	delete _brain;
	std::cout << "Destructor Dog" << std::endl;
}

Dog::Dog ( const Dog &cpy ) {
	std::cout << "Copy Constructor Dog " << std::endl;
	this->_brain = new Brain();
	*this = cpy;
}

Dog &Dog::operator = ( const Dog & cpy) {
	this->type = cpy.type;
	*(this->_brain) = *(cpy._brain);
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}

Brain *Dog::getBrainDog() {
	return (this->_brain);
}

