//
// Created by Lowell Zima on 1/13/23.
//

#ifndef R4_CPP_CONVERSION_H
#define R4_CPP_CONVERSION_H

#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>

class Conversion {

public:
	Conversion(char *s);
	~Conversion();
	Conversion (const Conversion &c);
	Conversion &operator = (const Conversion &c);

	static int all_good_digit(std::string &str);
	static unsigned long setPrecision(const std::string& str);

private:
	char 	_c;
	float 	_f;
	double 	_d;
	bool 	_isOk;



};

std::ostream &operator<<(std::ostream &os, const Conversion &n);


#endif //R4_CPP_CONVERSION_H
