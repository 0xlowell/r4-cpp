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

Fixed &Fixed::operator=(const Fixed &obj) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(obj.getRawBits());
	return (*this);
}

float	Fixed::toFloat( void ) const { // converts the fixed-point value to a floating-point value.
	return ((float) this->_value / (float)(1 << this->_bit));
}

int 	Fixed::toInt( void ) const { // converts the fixed-point value to an integer value.
	return (this->_value >> this->_bit );
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj) {
	/*
	 * An overload of the insertion («) operator that inserts a floating-point representation
	 * of the fixed-point number into the output stream object passed as parameter.
	 * More infos below.
	 */
	os << obj.toFloat();
	return ( os );
}

/*
 * Ce code représente une surcharge de l'opérateur << pour la classe Fixed.
 * L'opérateur << est utilisé pour afficher des valeurs sur un flux de
 * sortie, comme un flux standard (std::cout par exemple).
 * La surcharge de l'opérateur << permet d'écrire des valeurs de la classe
 * Fixed sur un flux de sortie. Dans ce cas précis, l'opérateur << appelle
 * la méthode toFloat() de l'objet Fixed passé en paramètre, puis affiche
 * le résultat sur le flux de sortie (os). Enfin, l'opérateur << retourne
 * le flux de sortie (os) afin de permettre le chaînage avec d'autres
 * opérations sur ce flux.
 * Voici un exemple d'utilisation de cette surcharge de l'opérateur << :

 		Fixed f(42);
		std::cout << f << std::endl; // affiche "42" sur la sortie standard

 * En résumé, cette surcharge de l'opérateur << permet d'afficher des
 * valeurs de la classe Fixed sur un flux de sortie.
 */