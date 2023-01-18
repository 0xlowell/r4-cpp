//
// Created by Lo on 18/01/2023.
//
#include <iostream>
#include "iter.h"

int main () {

	int a[] = {1, 2};
	std::cout << "/ int array /" << std::endl;
	::iter(a, 2, ::print_it);

	char s[] = "string";
	std::cout << "/ string / " << std::endl;
	::iter(s, 6, ::print_it);

	return 0;
}

