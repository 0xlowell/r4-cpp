//
// Created by Lowell Zima on 12/15/22.
//

#ifndef R4_CPP_FIXED_H
#define R4_CPP_FIXED_H

#include <iostream>


class Fixed {
private:
	int _value;
	int static const _bit = 8;

public:
	Fixed(); // default constructor
	~Fixed(); // destructor
	Fixed(const Fixed &obj); // copy constructor
	Fixed( const int i ); // copy constructor with int
	Fixed( const float f ); // copy constructor with float
	void setRawBits( const int raw ); // define _value
	int getRawBits() const; // return _value

	float	toFloat( void ) const;
	int 	toInt( void ) const;

	Fixed &operator=( const Fixed &obj ); // Copy assignment operator called: operator obj2 = obj

/*
 * Operator's comparaison
 */
	bool operator>( const Fixed &obj ) const;
	bool operator<( const Fixed &obj ) const;
	bool operator<=( const Fixed &obj ) const;
	bool operator>=( const Fixed &obj ) const;
	bool operator==( const Fixed &obj ) const;
	bool operator!=( const Fixed &obj ) const;
/*
 * Operator's arithmetics
 */
	Fixed operator+( const Fixed &obj ) const;
	/*
	 * adds the value of the Fixed object passed as an argument (obj) to the
	 * object on which the function is called, and returns a new Fixed object
	 * with the result of the addition.
	 */
	Fixed operator-( const Fixed &obj ) const; // subtracts
	Fixed operator*( const Fixed &obj ) const; // multiplies
	Fixed operator/( const Fixed &obj ) const; // divides
/*
 * Operator's incrementation
 */
	Fixed &operator++();        // Pre-increment operator
	/*
	 * This function increments the value of the Fixed object by the smallest
	 * representable value and returns a reference to the object.
	 */
	Fixed operator++( int );        // Post-increment operator
	Fixed &operator--(); //  Pre-decrement operator
	Fixed operator--( int ); // Post-decrement operator
/*
 * Find smallest or biggest
 */
	static Fixed &min( Fixed &a, Fixed &b ); //returns a reference to the smallest one.
	static const Fixed &min( const Fixed &a, const Fixed &b ); //returns a reference to the smallest one
	static Fixed &max( Fixed &a, Fixed &b ); // returns a reference to the greatest one.
	static const Fixed &max( const Fixed &a, const Fixed &b ); //returns a reference to the greatest one

};

std::ostream &operator<<(std::ostream &os, const Fixed &obj);


#endif //R4_CPP_FIXED_H
