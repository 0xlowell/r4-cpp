//
// Created by Lowell Zima on 12/10/22.
//
#include "HarlFilter.hpp"


int main(int ac, char **av)
{
	(void)av;
	if (ac != 1)
	{
		std::cout << "Launch only ./HarlFilter without args" << std::endl;
		return 1;
	}

	Harl Harl;
	std::string input;


	std::cout << "(0) Level of Gravity: (1) ERROR + (2) WARNING + (3) INFO + (4) DEBUG" << std::endl;
	std::getline(std::cin, input);
	std::cout << std::endl;
	Harl.complain(input);
	std::cout << std::endl;
	return(0);
}
