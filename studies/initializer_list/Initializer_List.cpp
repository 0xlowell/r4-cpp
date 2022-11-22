//
// Created by Lowell Zima on 11/17/22.
//

#include "Initializer_List.hpp"

// Simple assignement
Sample1::Sample1(char p1, char p2, int p3)
{
	std::cout << "Constructor called" << std::endl;
	this->a1 = p1;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	this->a2 = p2;
	std::cout << "this->a1 = " << this->a2 << std::endl;
	this->a3 = p3;
	std::cout << "this->a1 = " << this->a3 << std::endl;

	return ;
}

/*
 * Sample1 == Sample2
 */

// Initialisation list
Sample2::Sample2(char p1, char p2, int p3) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "Constructor called" << std::endl;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;

	return ;
}

Sample1::~Sample1(void) {
	std::cout << "Destructor called";
}

Sample2::~Sample2(void) {
	std::cout << "Destructor called";
}
