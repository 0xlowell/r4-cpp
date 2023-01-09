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

	virtual std::string getName();
	virtual int getGradeToSign();
	virtual int getExecute();
	virtual bool getSign();

	virtual void Signature(const Bureaucrat &b);

	// Check Grade Form
	virtual void GradeCheckAForm();

	virtual void execute(Bureaucrat const &executor) const;

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
