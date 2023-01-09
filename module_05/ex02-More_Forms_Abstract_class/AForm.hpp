//
// Created by Lo on 06/01/2023.
//

#ifndef R4_CPP_AForm_H
#define R4_CPP_AForm_H

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

public:

	AForm ( std::string name, int grade, int execute );
	AForm (const AForm &cpy);
	AForm &operator = (const AForm &cpy);
	virtual ~AForm();

	std::string getName();
	int getGradeToSign();
	int getExecute();
	bool getSign();

	virtual void Signature(const Bureaucrat &b) = 0;

	// Check Grade Form
	virtual void GradeCheckAForm() = 0;
	virtual void execute(Bureaucrat const &executor) const = 0;

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

#endif //R4_CPP_AForm_H
