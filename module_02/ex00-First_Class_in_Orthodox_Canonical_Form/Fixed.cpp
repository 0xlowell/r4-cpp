//
// Created by Lowell Zima on 12/15/22.
//

#include "Fixed.hpp"

Fixed::Fixed (): _value(1) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed () {
	std::cout << "Deconstructor called" << std::endl;
}

Fixed::Fixed ( const Fixed &obj ) { // on parameter, a reference to an obj
	std::cout << "Copy constructor called" << std::endl;
	*this = obj; //
}

Fixed &Fixed::operator=( const Fixed &obj ) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(obj.getRawBits());
	return ( *this );
}

int Fixed::getRawBits ( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void Fixed::setRawBits(const int raw) {
	this->_value = raw;
}
