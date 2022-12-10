//
// Created by Lowell Zima on 12/10/22.
//
#include "Harl.hpp"


int main()
{
	Harl Harl;

	std::cout << "INFO Input " << std::endl;
	Harl.complain("INFO");
	std::cout << std::endl;

	std::cout << "WARNING Input " << std::endl;
	Harl.complain("WARNING");
	std::cout << std::endl;

	std::cout << "ERROR Input" << std::endl;
	Harl.complain("ERROR");
	std::cout << std::endl;

	std::cout << "DEBUG Input " << std::endl;
	Harl.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "OTHER Input" << std::endl;
	Harl.complain("OTHER");
	std::cout << std::endl;

	return(0);
}
