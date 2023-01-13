//
// Created by Lowell Zima on 1/12/23.
//

#ifndef R4_CPP_INTERN_H
#define R4_CPP_INTERN_H
#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern {

public :
	Intern();
	~Intern();
	Intern( const Intern &i );
	Intern &operator = ( const Intern &i );

	AForm *makeForm(std::string form, std::string name_target) const;

	class FormNotFindException : public std::exception {
	public:
		const char *what() const throw() {
			return "Form Not Found by Intern";
		}
	};

};


#endif //R4_CPP_INTERN_H
