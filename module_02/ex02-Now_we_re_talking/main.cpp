//
// Created by Lowell Zima on 12/15/22.
//

#include "Fixed.hpp"

int main() {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "Expected, when b( Fixed( 5.05f ) * Fixed( 2 ) ) " << std::endl;
	std::cout << "Expected 0: "<< a << std::endl;
	std::cout << "Expected 0.00390625: "<< ++a << std::endl;
	std::cout << "Expected 0.00390625: "<< a << std::endl;
	std::cout << "Expected 0.00390625: "<< a++ << std::endl;
	std::cout << "Expected 0.0078125: "<< a << std::endl;
	std::cout << "Expected 10.1016: "<< b << std::endl;
	std::cout << "Expected 10.1016: "<< Fixed::max( a, b ) << std::endl;
	return 0;
}
