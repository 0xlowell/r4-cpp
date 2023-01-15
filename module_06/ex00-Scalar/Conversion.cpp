//
// Created by Lowell Zima on 1/13/23.
//

#include "Conversion.hpp"



Conversion::Conversion(char *s) {
	std::cout << "++Conversion" << std::endl;

	std::string str = s; // str to test it
	this->_isOk = false; // set as true if it's either : char, int, float, double or others stuff


	// if single char
	if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
	{
		this->_c = str[0]; // stock in _v, single char
		this->_isOk = true; // All good
	}
	// pseudo literals
	else {
		if (str == "nan" || str == "nanf") {
			this->_d = NAN;
			this->_isOk = true;
		}
		else if (str == "+inf" || str == "inf" || str == "-inf" || str == "+inff" || str == "inff" || str == "-inff") {
			this->_isOk = true;

			if (str[str.length() - 1] == 'f')
				(str[0] == '-' ? this->_f = -INFINITY : this->_f = INFINITY);
			else
				(str[0] == '-' ? this->_d = static_cast<double>(-INFINITY) : this->_d = static_cast<double>(INFINITY));
		}
		// int, float, double
		else if (!all_good_digit(str))
		{
			if ()
		}
	}
}

Conversion::~Conversion() {
	std::cout << "--Conversion" << std::endl;
}

Conversion::Conversion(const Conversion &c) {
	*this = c;
}

Conversion &Conversion::operator = (const Conversion &c) {
	(void)c;
	return (*this);
}


/*
 * Utils fonctions
 */

int Conversion::all_good_digit(std::string &str) {
	int point = -1;
	int f = -1;
	int ret = 0;

	for (unsigned long i = 0; i < str.length(); i++)
	{
		// isdigit? + start with  + or -
		if (str[0] == '+' || str[0] == '-' || std::isdigit(str[i]))
		{
			// check doublons: f .
			if (str[i] == '.' || str[i] == 'f')
			{
				point == -1 ? point = 1 : ret = 1;
				f == -1 ? f = 1 : ret = 1;
			}
		}
		else
			ret = 1;
	}
	return (ret);
}

unsigned long Conversion::setPrecision(const std::string &str) {
	return (str.length() -
			((str.find('.') != std::string::npos) +
			 (str.find('f') != std::string::npos) +
			 (str.find('+') != std::string::npos) +
			 (str.find('-') != std::string::npos)));
}



std::ostream &operator<<(std::ostream &os, const Conversion &n) {

	os << "char :";
	if ()

	// Try to convert input to char

	// Try to convert input to char

	// Try to convert input to int

	// Try to convert input to float

	// Try to convert input to double


}


//std::cout << "char : ";
//charInput = input[0];
//if (!isprint(charInput)) {
//std::cout << "Input is not a displayable character." << std::endl;
//}
//else
//std::cout << static_cast<char>(charInput) << std::endl;
//
//// Try to convert input to int
//std::cout << "int : ";
//intInput = std::stoi(input);
//if (intInput > std::numeric_limits<int>::max() || intInput < std::numeric_limits<int>::min()) {
//std::cout << "Input exceeds int range." << std::endl;
//}
//
//// Try to convert input to float
//std::cout << "float : ";
//floatInput = std::stof(input);
//if (std::isinf(floatInput)) {
//throw std::out_of_range("Input is infinity.");
//} else if (std::isnan(floatInput)) {
//throw std::out_of_range("Input is NaN.");
//}
//
//// Try to convert input to double
//std::cout << "double: ";
//doubleInput = std::stod(input);
//if (std::isinf(doubleInput)) {
//throw std::out_of_range("Input is infinity.");
//} else if (std::isnan(doubleInput)) {
//throw std::out_of_range("Input is NaN.");
//}
//
//std::cout << "Invalid input. Input must be a valid char, int, float or double." << std::endl;
//return 1;
