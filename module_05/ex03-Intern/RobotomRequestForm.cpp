//
// Created by Lowell Zima on 1/6/23.
//

#include "RobotomRequestForm.hpp"
#include <random>

RobotomRequestForm::RobotomRequestForm( const std::string &target ):
		AForm("Robotom Request Form", 72, 45 ), _target(target) {
	std::cout << "Request for a Robotom Request Form" << std::endl;
}

RobotomRequestForm::~RobotomRequestForm() {
	std::cout << "--Robotom Request Form" << std::endl;
}

RobotomRequestForm::RobotomRequestForm(const RobotomRequestForm &p): AForm(p) {
	std::cout << "Copy RobotomRequestForm" << std::endl;


	*this = p;
}

RobotomRequestForm &RobotomRequestForm::operator=( const RobotomRequestForm &p ) {
	std::cout << "Operator = for Robotom Request Form" << std::endl;
	if (this == &p)
		return *this;

	AForm::operator=(p);
	this->_target = p._target;

	return (*this);
}

void RobotomRequestForm::execute(Bureaucrat const &executor) const {
	std::random_device rd;
	if (executor.getGrade() < this->getExecute()) {
		std::cout << BOLD_G << "Robotom Request Form executed by " << executor << RESET << std::endl;
		if (rd() % 2) {
			std::cout << this->_execute << " has been robotomized." << std::endl;
		}
		else
			std::cout << this->_execute << " robotomy failed." << std::endl;
	}
	else
		throw AForm::GradeTooLowException();
}
