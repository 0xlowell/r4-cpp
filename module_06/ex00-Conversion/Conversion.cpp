//
// Created by Lowell Zima on 1/13/23.
//

#include "Conversion.hpp"

Conversion::Conversion(const char *s) : _str(s), _v(), _isOk(false){
	std::cout << "++Conversion" << std::endl;

	std::string str = s;

	// if single char
	if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
	{
		this->_v = str[0];
		this->_isOk = true;
	}
	// pseudo literals
	else {
		if (str == "nan" || str == "nanf") {
			this->_v = NAN;
			this->_isOk = true;
		}
		else if (str == "+inf" || str == "inf" || str == "-inf" ||
		str == "+inff" || str == "inff" || str == "-inff") {
			this->_isOk = true;
			if (str[str.length() - 1] == 'f')
				(str[0] == '-' ? this->_v = -INFINITY : this->_v = INFINITY);
			else
				(str[0] == '-' ? this->_v = -INFINITY : this->_v = INFINITY);
		}
		// int, float, double
		else if (all_good_digit(str) == 0) {
			stod(str);
			this->_isOk = true;
		}
	}
}

Conversion::~Conversion() {
	std::cout << "--Conversion" << std::endl;
}

Conversion::Conversion(const Conversion &c) : _v(), _isOk(false) {
	*this = c;
}

Conversion &Conversion::operator = (const Conversion &c) {
	this->_isOk = c._isOk;
	this->_v = c._v;

	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Conversion &n) {

	int precision = 1;

//	std::cout << "_isOk = "<< n.getOk() << std::endl;

	if (n.getOk() == 0) {
		std::cerr << "getOk == 0: error" << std::endl;
		exit(0);
	}
	// Input to char
	os << "char -> '";
	if (!n.getOk() || static_cast<char>(n.getV()) != std::floor(n.getV())) {
		os << "Invalid input\n";
	}
	else if (std::isprint(static_cast<char>(n.getV())))
			os << (static_cast<char>(n.getV())) << "\'" << '\n';
	else
		os << "Non displayable" << "\'" << '\n';

	// Input to int
	os << "int -> '";
	os << (static_cast<int>(n.getV())) << "\'" << '\n';

	// Input to float
	os << "float -> '";
//	os << "Precision : "<< Conversion::setPrecision(n.getS())  << std::endl;
	if (n.getS().find('.') != std::string::npos)
		precision = Conversion::getPrecision(n.getS());

	os << std::fixed << std::setprecision(precision);
	os << (static_cast<float>(n.getV())) << 'f' << "\'" <<'\n';


	// Input to double
	os << "double -> '";
	os << (static_cast<double>(n.getV())) << "\'" <<'\n';

	return (os);
}

/*
 * Getters
 */
int Conversion::getOk() const {
	return (this->_isOk);
}

double Conversion::getV() const {
	return (this->_v);
}

std::string Conversion::getS() const {
	return (this->_str);
}

/*
 * Conversion
 */
void Conversion::stod(const std::string &str) {
	double d;
	if (std::istringstream(str) >> d) {
		this->_v = d;
		this->_isOk = true;
	}
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
		if (str[0] == '+' || str[0] == '-' || str[i] == '.' || str[i] == 'f' || std::isdigit(str[i]))
		{
			// check doublons: f .
			if (str[i] == '.')
				point == -1 ? point = 1 : ret = 1;

			if (str[i] == 'f')
				f == -1 ? f = 1 : ret = 1;
		}
	}
	return (ret);
}

unsigned long Conversion::getPrecision(const std::string &str) {
	return (str.length() -
			(str.find('.') +
			(str.find('.') != std::string::npos) +
			(str.find('f') != std::string::npos)));
}
