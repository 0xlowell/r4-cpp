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
	std::cout << "Operator = Brain" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		if (i < 1) {
			std::cout << "Copy _ideas[" << i << "] = "
					  << _ideas[i] << " from cpy._ideas[" << i << "] = " << cpy._ideas[i] << std::endl << std::endl;
			std::cout << " ; cpy Address " << cpy._ideas
					  << " ; this Address " << this->_ideas << std::endl << std::endl;
		}

		this->_ideas[i] = cpy._ideas[i];
	}
	return (*this);
}
