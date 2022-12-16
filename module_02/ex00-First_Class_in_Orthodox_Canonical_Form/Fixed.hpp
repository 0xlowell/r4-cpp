//
// Created by Lowell Zima on 12/15/22.
//

#ifndef R4_CPP_FIXED_H
#define R4_CPP_FIXED_H

#include <iostream>

class Fixed {
private:
	int					_value;
	static int const 	_bit = 8;

public:
	Fixed();
	~Fixed();
	Fixed( const Fixed &obj );
	Fixed &operator=(const Fixed &obj);


	int getRawBits(void) const;
	void setRawBits(int const raw);
};


#endif //R4_CPP_FIXED_H
