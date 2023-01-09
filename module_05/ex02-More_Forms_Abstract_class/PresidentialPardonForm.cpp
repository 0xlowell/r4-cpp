//
// Created by Lowell Zima on 1/6/23.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( const std::string target ):
AForm("Presidential Pardon Form", 25, 5 ), _target(target) {
	std::cout << target <<  " request for a Presidential Pardon Form" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "--Presidential Pardon Form" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p): AForm(p) {
	std::cout << "Copy PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=( const PresidentialPardonForm &p ) {
	std::cout << "Operator = for Presidential Pardon Form" << std::endl;

	return (*this);
}
