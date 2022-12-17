//
// Created by Lowell Zima on 12/15/22.
//

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return ;
}


Fixed::Fixed(const int i) { // converts int -> fixed-point value
	std::cout << "Int constructor called" << std::endl;
	this->_value = i << this->_bit;
}

Fixed::Fixed(const float f) { // converts float -> fixed-point value
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(f * (1 << this->_bit));
}

void Fixed::setRawBits( const int raw) { // sets the raw value of the fixed-point number.
	this->_value = raw;
}

int Fixed::getRawBits() const { // returns the raw value of the fixed-point value.
	return (this->_value);
}

float	Fixed::toFloat( void ) const { // converts the fixed-point value to a floating-point value.
	return ((float) this->_value / (float)(1 << this->_bit));
}

int 	Fixed::toInt( void ) const { // converts the fixed-point value to an integer value.
	return (this->_value >> this->_bit );
}

Fixed &Fixed::operator=(const Fixed &obj) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(obj.getRawBits());
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj) {
	os << obj.toFloat();
	return ( os );
}
