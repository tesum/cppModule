#include "Bureaucrat.hpp"

/* Constructors */
/******************************************************************************************/
Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (this->_grade > 150)
		throw GradeTooLowException();
	if (this->_grade < 1)
		throw GradeTooHighException();
	std::cout << this->_name << " with grade " << this->_grade << " created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &raw) {
	*this = raw;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &raw) {
	this->_name = raw._name;
	this->_grade = raw._grade;
	return (*this);
}
/* Disstructor */
/******************************************************************************************/
Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat distructor called" << std::endl;
}

/* Getters */
/******************************************************************************************/
std::string Bureaucrat::getName() const {
	return this->_name;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

/* Methods */
/******************************************************************************************/
void Bureaucrat::upGrade() {
	_grade--;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::downGrade() {
	_grade++;
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form &f) {
	if (f.getIsSigned() == true)
		std::cout << "This form has already been signed!" << std::endl;
	else {
		try {
			f.beSigned(*this);
			std::cout << "Bureaucrat " << this->_name << " signs form: " << f.getName() << std::endl;
		} catch (const std::exception &e) {
			std::cout << this->_name << " can't sign form " << f.getName() << " cause: ";
			std::cout << e.what() << std::endl;
		}
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "\033[31m Grade too high!\033[0m";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "\033[31m Grade too low!\033[0m";
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &b) {
	out << b.getName() << ", bureaucrat grade " << b.getGrade();
	return out;
}