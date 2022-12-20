//
// Created by Lowell Zima on 12/15/22.
//

#include "Fixed.hpp"

int main() {
	Fixed a; // Constructor
	Fixed b( a ); // Constructor copy
	Fixed c; // Constructor

	c = b; // Copy assignement operator
	std::cout << a.getRawBits() << std::endl; // returns the raw value of the fixed-point value.
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}
