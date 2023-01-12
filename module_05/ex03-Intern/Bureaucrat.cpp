//
// Created by Lo on 05/01/2023.
//

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "++Default" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {

	GradeCheck();
	std::cout << "++Bureaucrat: " << _name << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "--Bureaucrat: " << _name << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) {
	*this = cpy;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &cpy) {
	this->_name = cpy._name;
	this->_grade = cpy._grade;
	return (*this);
}

std::string Bureaucrat::getName() const {
	return (this->_name);
}

int Bureaucrat::getGrade() const {
	return (this->_grade);
}

void Bureaucrat::GradeCheck() {
	if (_grade < 1)
		throw GradeTooLowException();
	if (_grade > 150)
		throw GradeTooHighException();
}

void Bureaucrat::incrementGrade() {
	_grade++;
	GradeCheck();
	std::cout << "incrementGrade: " << _grade << std::endl;
}

void Bureaucrat::decrementGrade() {
	_grade--;
	GradeCheck();
	std::cout << "decrementGrade: " << _grade << std::endl;
}

void Bureaucrat::signForm(AForm &f) {
	f.Signature(*this);
	std::cout << BOLD_G << _name << " signed " << f.getName() << RESET << std::endl;

}

void Bureaucrat::executeForm(AForm &f) const {
	f.execute(*this);
	std::cout << BOLD_G << _name << " execute " << f.getName() << RESET << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b) {
	out << b.getName() << ", bureaucrat grade " << b.getGrade();
	return out;
}
