//
// Created by Lowell Zima on 1/4/23.
//

#include "Brain.hpp"


Brain::Brain() {
	std::cout << "Constructor Brain" << std::endl;
}

Brain::~Brain() {
	std::cout << "Destructor Brain" << std::endl;
}

Brain::Brain ( const Brain &cpy ) {
	*this = cpy;
}

Brain &Brain::operator = ( const Brain & cpy) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = cpy.ideas[i];
	return (*this);
}
