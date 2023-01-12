//
// Created by Lo on 06/01/2023.
//

#ifndef R4_CPP_FORM_H
#define R4_CPP_FORM_H

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public:
	Form ( std::string name, int grade, int execute );
	~Form();
	Form (const Form &cpy);
	Form &operator = (const Form &cpy);

	std::string getName();
	int getGrade();
	int getExecute();
	bool getSign();

	void Signature(const Bureaucrat &b);

	void GradeCheckForm();

private:
	std::string _name;
	bool 		_sign;
	const int 	_grade_to_sign;
	const int 	_execute;

	class GradeTooLowException : public std::exception {
	public:
		const char* what() const throw() {
			return ("Grade too low");
		}
	};

	class GradeTooHighException: public std::exception {
	public:
		const char* what() const throw() {
			return ("Grade too high");
		}
	};

};

#endif //R4_CPP_FORM_H
