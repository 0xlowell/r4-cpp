//
// Created by Lowell Zima on 11/17/22.
//

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

void	search(PhoneBook *pb)
{
	std::string line;
	int i;

	pb->printIndex();
	std::cout << " Contact index ? :";
	std::getline(std::cin, line);
	i = line[0] - '0';
	if (line[1] == 0 && i >= 0 && i <= 7)
		pb->printContact(i);
	else
		std::cerr << line << " is an invalid index." << std::endl;
}


int main(int ac, char **av)
{
	std::string	line;
	PhoneBook	pb;
	int 		i;

	(void) av;

	if (ac != 1){ // Protect if ./PhoneBook is launch with an argument
		std::cout << "Launch ./PhoneBook without arguments\n" << std::endl;
		std::exit(0);
	}
	std::cout << "Use 'ADD', 'SEARCH' or 'EXIT'" << std::endl;
	std::cout << "> ";
	std::getline(std::cin, line); // Get first input line
	i = 0;
	while (std::cin)
	{
		if (line.compare("ADD") == 0)
		{
			pb.addContact(i);
			i++;
			if (i == 8)
				i = 0;
		}
		else if (line.compare("SEARCH") == 0)
			search(&pb);
		else if (line.compare("EXIT") == 0)
			std::exit(0);
		std::cout << "> ";
		std::getline(std::cin, line);
	}
}
