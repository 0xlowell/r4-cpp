//
// Created by Lo on 18/01/2023.
//

#include "easyfind.h"
#include <list>
#include <vector>


int main () {

	std::vector<int> vect;
	for (int i = 0; i <= 6; ++i)
		vect.push_back(i);

	std::vector<int>::iterator ret;


	std::cout << "Valid Test: find '6' => ret : ";
	if ((ret = easy_find(vect, 6)) != vect.end()) {
		std::cout << *ret << std::endl;
	}
	else {
		std::cerr << "No occurence." << std::endl;
	}

	std::cout << "Error Test: find '7' => ret : ";
	if ((ret = easy_find(vect, 7)) != vect.end()) {
		std::cout << *ret << std::endl;
	}
	else {
		std::cerr << "No occurence." << std::endl;
	}
	return (0);
}
