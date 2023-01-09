//
// Created by Lowell Zima on 1/4/23.
//

#include "Dog.hpp"


Dog::Dog() {
	setType ("dog");
	_brain = new Brain();
	std::cout << "Constructor Dog" << std::endl;
}

Dog::~Dog() {
	delete _brain;
	std::cout << "Destructor Dog" << std::endl;
}

Dog::Dog ( const Dog &cpy ) {
	std::cout << "Copy Constructor Dog " << std::endl;
	*this = cpy;
}

Dog &Dog::operator = ( const Dog & cpy) {
	this->type = cpy.type;
//	if (this->_brain)
//	delete this->_brain;
	this->_brain = new Brain();
	*(this->_brain) = *(cpy._brain);
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}

Brain *Dog::getBrainDog() {
	return (this->_brain);
}

