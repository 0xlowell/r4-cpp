//
// Created by Lo on 18/01/2023.
//
#include <iostream>
#include "Array.hpp"

int main() {
	const Array<int> array_v(3);
	array_v[0] = 1;
	array_v[1] = 10;
	array_v[2] = 20;

	std::cout << array_v[0] << std::endl;
	std::cout << array_v[1] << std::endl;
	std::cout << array_v[2] << std::endl;

	std::cout << "-" << std::endl;
	std::cout << "Try outbound index" << std::endl;
	try {
		std::cout << array_v[3] << std::endl;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "-" << std::endl;
	std::cout << "Instance empty string" << std::endl;
	try {
		Array<std::string> s(0);
		std::cout << s[0] << std::endl;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
