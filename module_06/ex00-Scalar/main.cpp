//
// Created by Lowell Zima on 1/13/23.
//


#include <iostream>
#include <limits>
#include <cmath>

#include "Conversion.hpp"

int main(int ac, char* av[]) {
	if (ac != 2) {
		std::cout << "Invalid number of arguments. " << std::endl;
		return 1;
	}

	Conversion n;
	n.Convert(av[1]);
}
