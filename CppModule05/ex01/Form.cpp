#include "Form.hpp"

/* Constructors */
/******************************************************************************************/
Form::Form() : _name("RandomName"), _gradeToSignIt(150), _gradeToExecuteIt(150), _isSigned(false) {}

Form::Form(std::string name, int gradeToSignIt, int gradeToExecuteIt)
	: _name(name),
	_gradeToSignIt(gradeToSignIt),
	_gradeToExecuteIt(gradeToExecuteIt),
	_isSigned(false) {

		if (gradeToSignIt > 150 || gradeToExecuteIt > 150)
			throw Form::GradeTooLowException();
		else if (gradeToSignIt < 1 || gradeToExecuteIt < 1)
			throw Form::GradeTooLowException();
		std::cout << this->_name << " form been created." << std::endl;
	}

Form::Form(const Form &form)
	: _name(form._name),
	_gradeToSignIt(form._gradeToSignIt),
	_gradeToExecuteIt(form._gradeToExecuteIt),
	_isSigned(form._isSigned) { }

Form &Form::operator=(const Form &form) {
	if (this == &form)
		return *this;
	*this = form;
	return *this;
}

/* Disstructor */
/******************************************************************************************/
Form::~Form() {
	std::cout << "Form distructor called" << std::endl;
}

/* Getters */
/******************************************************************************************/

std::string Form::getName() const {
	return this->_name;
}

int Form::getGradeToSignIt() const {
	return this->_gradeToSignIt;
}

int Form::getGradeToExecuteIt() const {
	return this->_gradeToExecuteIt;
}

bool Form::getIsSigned() const {
	return this->_isSigned;
}

/* Methods */
/******************************************************************************************/
void Form::beSigned(const Bureaucrat &person) {
	if (_gradeToSignIt >= person.getGrade()) {
		_isSigned = true;
		std::cout << person.getName() << " signs " << this->getName() << std::endl;
	}
	else if (this->getIsSigned())
		throw FormAlreadySignedException();
	else
		throw Bureaucrat::GradeTooLowException();
}

const char *Form::GradeToHighException::what() const throw() {
	return "Form grade too high!";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Form grade too low!";
}

const char *Form::FormAlreadySignedException::what() const throw() {
	return "Form already signed!";
}

std::ostream &operator<<(std::ostream &out, Form &f) {
	out << "Name: " << f.getName() << std::endl
		<< ". IsSigned: " << f.getIsSigned() << std::endl
		<< ". GradeToSignIt: " << f.getGradeToSignIt() << std::endl
		<< ". GradeToExecuteIt: " << f.getGradeToExecuteIt();
	return out;
}