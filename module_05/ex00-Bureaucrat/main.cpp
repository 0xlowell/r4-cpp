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
	std::cout << "-----Error test-----" << std::endl;

	std::cout << std::endl;

	// Try-catch block

	/*
	 * When an exception is thrown, the current function terminates
	 * and control is passed back to the calling function. If the
	 * exception is not caught by a try-catch block, the program
	 * will terminate.
	 */

	try {
		// code that might throw Bureaucrat::GradeTooLowException
		Bureaucrat low("low", 3);
		std::cout << low << std::endl;
		low.decrementGrade();
		low.decrementGrade();
		low.decrementGrade();
	} catch (std::exception& e) {
		// code to handle the exception
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}
