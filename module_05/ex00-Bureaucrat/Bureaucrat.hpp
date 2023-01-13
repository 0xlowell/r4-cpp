//
// Created by Lo on 05/01/2023.
//

#ifndef R4_CPP_BUREAUCRAT_H
#define R4_CPP_BUREAUCRAT_H

#include <iostream>

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
