//
// Created by Lowell Zima on 12/15/22.
//

#include "Fixed.hpp"

Fixed::Fixed(): _value(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed &obj) { // Copy constructor
	*this = obj;
}

Fixed::Fixed(const int i) { // converts int -> fixed-point value
	this->_value = i << this->_bit;
}

Fixed::Fixed(const float f) { // converts float -> fixed-point value
	this->_value = roundf(f * (1 << this->_bit));
}

void Fixed::setRawBits( const int raw) { // sets the raw value of the fixed-point number.
	this->_value = raw;
}

int Fixed::getRawBits() const { // returns the raw value of the fixed-point value.
	return (this->_value);
}

Fixed &Fixed::operator=(const Fixed &obj) {
	this->setRawBits(obj.getRawBits());
	return (*this);
}

float	Fixed::toFloat( void ) const { // converts the fixed-point value to a floating-point value.
	return ((float) this->_value / (float)(1 << this->_bit));
}

int 	Fixed::toInt( void ) const { // converts the fixed-point value to an integer value.
	return (this->_value >> this->_bit );
}
/*
 * Operator's comparaison
 */
bool Fixed::operator>( const Fixed &obj ) const {
	return (this->_value > obj._value);
}

bool Fixed::operator<( const Fixed &obj ) const {
	return (this->_value < obj._value);
}

bool Fixed::operator<=( const Fixed &obj ) const {
	return (this->_value <= obj._value);
}

bool Fixed::operator>=( const Fixed &obj ) const {
	return (this->_value >= obj._value);
}

bool Fixed::operator==( const Fixed &obj ) const {
	return (this->_value == obj._value);
}

bool Fixed::operator!=( const Fixed &obj ) const {
	return (this->_value != obj._value);
}
/*
 * Operator's arithmetics
 */
Fixed Fixed::operator+( const Fixed &obj ) const {
	Fixed ret(this->toFloat() + obj.toFloat());
	return (ret);
}

Fixed Fixed::operator-( const Fixed &obj ) const {
	Fixed ret(this->toFloat() - obj.toFloat());
	return (ret);
}

Fixed Fixed::operator*( const Fixed &obj ) const {
	Fixed ret(this->toFloat() * obj.toFloat());
	return (ret);
}

Fixed Fixed::operator/( const Fixed &obj ) const {
	Fixed ret(this->toFloat() / obj.toFloat());
	return (ret);
}
/*
 * Operator's incrementation
 */
Fixed &Fixed::operator++() {
	++this->_value;
	return (*this);
}

Fixed Fixed::operator++( int ) {
	Fixed ret(*this);
	++(*this);
	return (ret);
}

Fixed &Fixed::operator--() {
	--this->_value;
	return (*this);
}

Fixed Fixed::operator--( int ) {
	Fixed ret(*this);
	--(*this);
	return (ret);
}

Fixed &Fixed::min( Fixed &a, Fixed &b ) {
	return ((a < b) ? a : b);
}

const Fixed &Fixed::min( const Fixed &a, const Fixed &b ) {
	return ((a < b) ? a : b);
}

Fixed &Fixed::max( Fixed &a, Fixed &b ) {
	return ((a > b) ? a : b);
}

const Fixed &Fixed::max( const Fixed &a, const Fixed &b ) {
	return ((a > b) ? a : b);
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj) {
	os << obj.toFloat();
	return ( os );
}
