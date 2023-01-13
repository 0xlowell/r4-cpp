//
// Created by Lowell Zima on 1/6/23.
//

#ifndef R4_CPP_PRESIDENTIALPARDONFORM_H
#define R4_CPP_PRESIDENTIALPARDONFORM_H

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm {
public:
	PresidentialPardonForm(const std::string &target);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &p);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &p);

	void execute(const Bureaucrat &executor) const;

private:
	std::string _target;
};

#endif //R4_CPP_PRESIDENTIALPARDONFORM_H
