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
	//Orthodox canonical form
	Conversion(const char *s);
	~Conversion();
	Conversion (const Conversion &c);
	Conversion &operator = (const Conversion &c);

	// Utils fcts
	static int all_good_digit(std::string &str);
	static unsigned long getPrecision(const std::string& str);
	void stod(const std::string &str);


	//Getters
	int getOk() const;
	double getV() const;
	std::string  getS() const;

private:
	std::string _str;
	double		_v;
	bool 		_isOk;



};

std::ostream &operator<<(std::ostream &os, const Conversion &n);


#endif //R4_CPP_CONVERSION_H
