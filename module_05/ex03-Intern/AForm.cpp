//
// Created by Lo on 06/01/2023.
//

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm ( std::string name, int grade, int execute )
: _name(name), _sign(false), _grade_to_sign(grade), _execute(execute)
{
	// this->GradeCheck();
	std::cout << "++AForm: " << _name << std::endl;
}

AForm::~AForm() {
	std::cout << "--AForm" << _name << std::endl;
}

AForm::AForm(const AForm &cpy)
:_name(cpy._name), _grade_to_sign(cpy._grade_to_sign), _execute(cpy._execute){
	this->_sign = cpy._sign;
}

AForm &AForm::operator=(const AForm &cpy) {
	this->_name = cpy._name;
	this->_sign = cpy._sign;
	return (*this);
}

std::string AForm::getName() {
	return (this->_name);
}

int AForm::getGradeToSign() {
	return (this->_grade_to_sign);
}

int AForm::getExecute() const {
	return (this->_execute);
}

bool AForm::getSign() {
	return (this->_sign);
}

void AForm::Signature(const Bureaucrat &b) {
	if (b.getGrade() <= this->_grade_to_sign)
		this->_sign = true;
	else
		throw AForm::GradeTooLowException();
}

void AForm::execute(Bureaucrat const &executor) const {
	std::cout << "Just A Form executed by " << executor << std::endl;
}

void AForm::GradeCheckAForm() {
	(this->_grade_to_sign < 0) ? throw AForm::GradeTooLowException() :
	(this->_grade_to_sign > 150) ? throw AForm::GradeTooHighException() :
	std::cout << " Grade to sign: OK " << std::endl;
}
/* To use the ternary operator (? :)
 * to throw an exception based on the value of the grade variable.
 *
 * (grade < 0) ? throw AForm::GradeTooLowException() :
 * (grade > 150) ? throw AForm::GradeTooHighException() :
 * std::cout << "Grade OK" << std::endl; ;
 *
 * In this case, the ternary operator first checks if grade is less than 0.
 * If it is, it throws a AForm::GradeTooLowException. If grade is not less than 0,
 * it checks if grade is greater than 150.
 *
 * If it is, it throws a AForm::GradeTooHighException. If neither of these conditions is true,
 * it will execute the code in the final clause : std::cout << "Grade OK" << std::endl;.
 * It is also worth noting that this code will only throw one exception,
 * even if both conditions are true (since the ternary operator only
 * evaluates one of the two options). If you want to throw both exceptions
 * if both conditions are true, you will need to use separate if statements
 * or a different control flow construct.
*/
