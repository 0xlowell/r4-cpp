//
// Created by Lo on 05/01/2023.
//
#include "Bureaucrat.hpp"

int main() {
	Bureaucrat bob( "bob", 2);

	std::cout << bob << std::endl;
	bob.incrementGrade();
	bob.incrementGrade();
	bob.incrementGrade();

	std::cout << bob << std::endl;
	bob.decrementGrade();
	bob.decrementGrade();

	std::cout << bob << std::endl;

	std::cout << std::endl;

	std::cout << " ----- Error test ----- " << std::endl;

	std::cout << std::endl;

	// try-catch block
	try {
		// code that might throw Bureaucrat::GradeTooLowException
		Bureaucrat 	low("low", 3);
		std::cout << low.getGrade() << std::endl;
		AForm		AForm("A38", 1, 10);
		low.signForm(AForm);
		std::cout << low << std::endl;
	}
	catch (std::exception& e) {
		// code to handle the exception
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
}
