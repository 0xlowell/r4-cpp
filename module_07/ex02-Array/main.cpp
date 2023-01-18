//
// Created by Lo on 18/01/2023.
//
#include <iostream>
#include "Array.hpp"

int main() {
	Array<int> array_v(3);
	array_v[0] = 1;
	array_v[1] = 10;
	array_v[2] = 20;

	std::cout << array_v[0] << std::endl;
	std::cout << array_v[1] << std::endl;
	std::cout << array_v[2] << std::endl;
	try {
		std::cout << array_v[3] << std::endl;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
