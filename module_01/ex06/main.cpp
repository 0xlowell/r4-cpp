//
// Created by Lowell Zima on 12/10/22.
//
#include "Harl.hpp"


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


	std::cout << "Order of level: INFO, WARNING, ERROR, DEBUG " << std::endl;
	std::getline(std::cin, input);
	Harl.complain(input);
	return(0);
}
