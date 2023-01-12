//
// Created by Lo on 05/01/2023.
//
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomRequestForm.hpp"
#include "AForm.hpp"

int main() {

	try {
		Bureaucrat 	low("low", 63);
		std::cout << BOLD_Y << low << RESET << std::endl;

		PresidentialPardonForm p(low);

		low.signForm(p);
		low.executeForm(p);

	}
	catch(std::exception &e) {
		std::cout << BOLD_RED " error "
				  << " because of " << e.what() << RESET << std::endl;
	}

	try {
		Bureaucrat 	low("low", 74);
		std::cout << BOLD_Y << low << RESET << std::endl;

		RobotomRequestForm r(low);

		low.signForm(r);
		low.executeForm(r);

	}
	catch(std::exception &e) {
		std::cout << BOLD_RED " error "
				  << " because of " << e.what() << RESET << std::endl;
	}

	try {
		Bureaucrat 	low("low", 13);
		std::cout << BOLD_Y << low << RESET << std::endl;

		ShrubberyCreationForm s(low);

		low.signForm(s);
		low.executeForm(s);

	}
	catch(std::exception &e) {
		std::cout << BOLD_RED " error "
				  << " because of " << e.what() << RESET << std::endl;
	}



	return (0);
}
