//
// Created by Lo on 05/01/2023.
//

#ifndef R4_CPP_BUREAUCRAT_H
#define R4_CPP_BUREAUCRAT_H


#define	BOLD_BLACK	"\033[1m\033[30m"
#define BOLD_RED	"\033[1m\033[31m"
#define BOLD_G		"\033[1m\033[32m"
#define	RESET   	"\033[0m"
#define BOLD_Y		"\033[1m\033[33m"
#define BOLD_W		"\033[1m\033[37m"


#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
public:
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat ( const Bureaucrat &cpy );
	Bureaucrat &operator = ( const Bureaucrat &cpy);

	std::string getName () const;
	int	getGrade () const;

	void GradeCheck();
	void incrementGrade();
	void decrementGrade();

	void signForm(Form &f);

private:
	std::string _name;
	int _grade;

	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw() {
			return "Grade too High";
		}
	};
	class GradeTooLowException : public std::exception {
	public :
		const char *what() const throw() {
			return "Grade too Low";
		}
	};

};

std::ostream& operator << (std::ostream& out, const Bureaucrat &b);

#endif //R4_CPP_BUREAUCRAT_H
