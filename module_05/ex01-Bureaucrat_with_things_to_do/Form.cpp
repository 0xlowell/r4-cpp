//
// Created by Lo on 06/01/2023.
//

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form ( std::string name, int grade, int execute )
: _name(name), _sign(false), _grade_to_sign(grade), _execute(execute)
{
	// this->GradeCheck();
	std::cout << "++Form: " << _name << std::endl;
}

Form::~Form() {
	std::cout << "--Form" << _name << std::endl;
}

Form::Form(const Form &cpy)
:_name(cpy._name), _grade_to_sign(cpy._grade_to_sign), _execute(cpy._execute){
	this->_sign = cpy._sign;
}

Form &Form::operator=(const Form &cpy) {
	this->_name = cpy._name;
	this->_sign = cpy._sign;
	return (*this);
}

std::string Form::getName() {
	return (this->_name);
}

int Form::getGrade() {
	return (this->_grade_to_sign);
}

int Form::getExecute() {
	return (this->_execute);
}

bool Form::getSign() {
	return (this->_sign);
}

void Form::Signature(const Bureaucrat &b) {
	if (b.getGrade() <= this->_grade_to_sign)
		this->_sign = true;
	else
		throw Form::GradeTooLowException();
}

void Form::GradeCheckForm() {
	(this->_grade_to_sign < 0) ? throw Form::GradeTooLowException() :
	(this->_grade_to_sign > 150) ? throw Form::GradeTooHighException() :
	std::cout << " Grade OK " << std::endl;
}


/* To use the ternary operator (? :)
 * to throw an exception based on the value of the grade variable.
 *
 * (grade < 0) ? throw Form::GradeTooLowException() :
 * (grade > 150) ? throw Form::GradeTooHighException() :
 * std::cout << "Grade OK" << std::endl; ;
 *
 * In this case, the ternary operator first checks if grade is less than 0.
 * If it is, it throws a Form::GradeTooLowException. If grade is not less than 0,
 * it checks if grade is greater than 150.
 *
 * If it is, it throws a Form::GradeTooHighException. If neither of these conditions is true,
 * it will execute the code in the final clause : std::cout << "Grade OK" << std::endl;.
 * It is also worth noting that this code will only throw one exception,
 * even if both conditions are true (since the ternary operator only
 * evaluates one of the two options). If you want to throw both exceptions
 * if both conditions are true, you will need to use separate if statements
 * or a different control flow construct.
*/
