//
// Created by Lowell Zima on 1/6/23.
//

#ifndef R4_CPP_SHRUBBERYCREATIONFORM_H
#define R4_CPP_SHRUBBERYCREATIONFORM_H

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
public :
	ShrubberyCreationForm( const Bureaucrat &target );
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &p);
	ShrubberyCreationForm &operator = (const ShrubberyCreationForm &p);

	void execute(const Bureaucrat &executor) const;

private:
	Bureaucrat _target;
};


#endif //R4_CPP_SHRUBBERYCREATIONFORM_H
