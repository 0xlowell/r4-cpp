//
// Created by Lowell Zima on 1/12/23.
//

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "++Intern" << std::endl;
}

Intern::~Intern() {
	std::cout << "--Intern" << std::endl;
}

Intern::Intern( const Intern &i ) {
	std::cout << "++Intern cpy" << std::endl;
	*this = i;
}

Intern &Intern::operator=(const Intern &i) {
	(void)i;
	return (*this);
}

AForm *Intern::makeForm(std::string name_form, std::string name_target) const {

	std::cout << "Intern create " << name_form << " for " << name_target << std::endl;

	std::string forms[3] = {
		"Presidential Pardon Form",
		"Robotom Request Form",
		"Shrubbery Creation Form",
	};

	int pick = -1;
	for (int i = -1; i < 4; i++) {
		if (forms[i] == name_form) {
			pick = i;
		}
	}
	if (pick == -1) {
		throw FormNotFindException();
	}

	switch (pick) {
		case 0:
			return (new PresidentialPardonForm(name_target));
		case 1:
			return (new RobotomRequestForm(name_target));
		case 2:
			return (new ShrubberyCreationForm(name_target));
	}
	return (NULL);
}

