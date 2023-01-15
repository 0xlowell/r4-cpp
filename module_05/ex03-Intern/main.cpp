//
// Created by Lo on 05/01/2023.
//
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomRequestForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main() {

	try {
		Intern x;
		AForm *ptr;
		ptr = x.makeForm("Presintial Pardon Form", "low");
		delete ptr;
	}
	catch (std::exception &e) {
		std::cout << BOLD_RED " error "
				  << " because of " << e.what() << RESET << std::endl;
	}


//	try {
//		Bureaucrat 	low("low", 1);
//		std::cout << BOLD_Y << low << RESET << std::endl;
//
//		PresidentialPardonForm p("Prout");
//
//		low.signForm(p);
//		low.executeForm(p);
//
//	}
//	catch(std::exception &e) {
//		std::cout << BOLD_RED " error "
//				  << " because of " << e.what() << RESET << std::endl;
//	}
//
//	try {
//		Bureaucrat 	low("low", 74);
//		std::cout << BOLD_Y << low << RESET << std::endl;
//
//		RobotomRequestForm r("Woao");
//
//		low.signForm(r);
//		low.executeForm(r);
//
//	}
//	catch(std::exception &e) {
//		std::cout << BOLD_RED " error "
//				  << " because of " << e.what() << RESET << std::endl;
//	}

//	try {
//		Bureaucrat 	low("low", 13);
//		std::cout << BOLD_Y << low << RESET << std::endl;
//
//		ShrubberyCreationForm s("WESH");
//
//		low.signForm(s);
//		low.executeForm(s);
//
//	}
//	catch(std::exception &e) {
//		std::cout << BOLD_RED " error "
//				  << " because of " << e.what() << RESET << std::endl;
//	}



	return (0);
}
