//
// Created by Lowell Zima on 1/6/23.
//
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( const std::string &target ):
		AForm("Shrubbery Creation Form", 145, 137 ), _target(target) {
	std::cout << "Request for a Shrubbery Creation Form" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "--Shrubbery Creation Form" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &p): AForm(p) {
	std::cout << "Copy ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=( const ShrubberyCreationForm &p ) {
	std::cout << "Operator = for Shrubbery Creation Form" << std::endl;
	if (this == &p)
		return *this;

	AForm::operator=(p);
	this->_target = p._target;
	return (*this);
}


void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {

	if (executor.getGrade() < this->getExecute()) {
		std::cout << BOLD_G << "Shrubbery Creation Form executed by " << executor << RESET << std::endl;
		std::ofstream file("ASCII Tree");
		file << " \n"
				"\n"
				"                                               |\n"
				"                                              -x-\n"
				"                                               |\n"
				"              v .   ._, |_  .,\n"
				"           `-._\\/  .  \\ /    |/_\n"
				"               \\\\  _\\, y | \\//\n"
				"         _\\_.___\\\\, \\\\/ -.\\||\n"
				"           `7-,--.`._||  / / ,\n"
				"           /'     `-. `./ / |/_.'\n"
				"                     |    |//\n"
				"                     |_    /\n"
				"                     |-   |\n"
				"                     |   =|\n"
				"                     |    |\n"
				"--------------------/ ,  . \\--------._";

	}
	else
		throw AForm::GradeTooLowException();
}



