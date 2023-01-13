//
// Created by Lowell Zima on 1/6/23.
//

#ifndef R4_CPP_ROBOTOMREQUESTFORM_H
#define R4_CPP_ROBOTOMREQUESTFORM_H

#include "AForm.hpp"

class RobotomRequestForm : public AForm {
public:
	RobotomRequestForm(const std::string &target);
	~RobotomRequestForm();
	RobotomRequestForm(const RobotomRequestForm &r);
	RobotomRequestForm &operator = (const RobotomRequestForm &r);

	void execute(const Bureaucrat &executor) const;

private:
	std::string _target;
};


#endif //R4_CPP_ROBOTOMREQUESTFORM_H
