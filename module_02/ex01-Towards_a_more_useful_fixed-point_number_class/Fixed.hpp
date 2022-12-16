//
// Created by Lowell Zima on 12/15/22.
//

#ifndef R4_CPP_FIXED_H
#define R4_CPP_FIXED_H

#include <iostream>


class Fixed {
private:
	int					_value;
	int static const 	_bit = 8;

public:
	Fixed();
	~Fixed();

	Fixed( const int i );
	Fixed( const float f );

	void setRawBits( const int raw);
	int getRawBits() const;
	Fixed &operator=(const Fixed &obj);


	float	toFloat( void ) const;
	int 	toInt( void ) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &obj);

#endif //R4_CPP_FIXED_H
