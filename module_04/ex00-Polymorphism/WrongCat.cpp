//
// Created by Lowell Zima on 1/4/23.
//

#include "WrongCat.hpp"


WrongCat::WrongCat() {
	std::cout << "Constructor WrongCat" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "Destructor WrongCat" << std::endl;
}

WrongCat::WrongCat ( const WrongCat &cpy ) {
	*this = cpy;
}

WrongCat &WrongCat::operator = ( const WrongCat & cpy) {
	this->type = cpy.type;
	return (*this);
}
