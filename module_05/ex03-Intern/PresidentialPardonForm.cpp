//
// Created by Lowell Zima on 1/6/23.
//

#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

PresidentialPardonForm::PresidentialPardonForm( const std::string &target ):
AForm("Presidential Pardon Form", 25, 5 ), _target(target) {
	std::cout << "Request for a Presidential Pardon Form" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "--Presidential Pardon Form" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &p ): AForm(p) {
	std::cout << "Copy PresidentialPardonForm" << std::endl;
	*this = p;
}

PresidentialPardonForm &PresidentialPardonForm::operator=( const PresidentialPardonForm &p ) {
	std::cout << "Operator = for Presidential Pardon Form" << std::endl;
	AForm::operator=(p);
	this->_target = p._target;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {

	if (executor.getGrade() < this->getExecute())
	{
		std::cout << BOLD_G << "Presidential Pardon Form executed by " << executor << RESET << std::endl;
		std::cout << BOLD_G << this->_target << " has been pardoned by Zaphod Beeblebrox." << RESET << std::endl;
	}
	else
		throw AForm::GradeTooLowException();
}
