//
// Created by Lo on 06/01/2023.
//

#ifndef R4_CPP_AForm_H
#define R4_CPP_AForm_H

#include <iostream>

#define	BOLD_BLACK	"\033[1m\033[30m"
#define BOLD_RED	"\033[1m\033[31m"
#define BOLD_G		"\033[1m\033[32m"
#define	RESET   	"\033[0m"
#define BOLD_Y		"\033[1m\033[33m"
#define BOLD_W		"\033[1m\033[37m"

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
	int getExecute() const ;
	bool getSign();

	void Signature(const Bureaucrat &b);

	virtual void execute(Bureaucrat const &executor) const = 0;

	// Check Grade Form
	void GradeCheckAForm();

protected:

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
