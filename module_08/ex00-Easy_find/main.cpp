//
// Created by Lo on 18/01/2023.
//

#include "easyfind.h"
#include <list>
#include <vector>


int main () {

	std::vector<int> vect;
	for (int i = 0; i < 6; i++)
		vect.push_back(i);

	std::vector<int>::iterator ret;


	std::cout << "Valid Test: find '1'" << std::endl;
	if ((ret = easy_find(vect, 1)) != vect.end()) {
		std::cout << *ret << std::endl;
	}
	else {
		std::cerr << "No occurence." << std::endl;
	}
	std::cout << "Error Test: find '7'" << std::endl;
	if ((ret = easy_find(vect, 7)) != vect.end()) {
		std::cout << *ret << std::endl;
	}
	else {
		std::cerr << "No occurence." << std::endl;
	}
	return (0);
}
