#include "Intern.hpp"

/* Constructors */
/******************************************************************************************/
Intern::Intern() {}

/* Disstructor */
/******************************************************************************************/
Intern::~Intern() {}

/* Methods */
/******************************************************************************************/
Form *Intern::makeForm(std::string type, std::string target) {
	
	std::string array[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form *result;
	int i = 0;
	while (i < 3 && array[i] != type) {
		i++;
	}
	switch (i)
	{
	case 0:
		result = new ShrubberyCreationForm(target);
		break;
	case 1:
		result = new RobotomyRequestForm(target);
		break;
	case 2:
		result = new PresidentialPardonForm(target);
		break;

	default:
		throw FormNotExistException();
		break;
	}
	std::cout << "Intern creates " << result->getName() << std::endl;
	return result;
}

const char *Intern::FormNotExistException::what() const throw() {
	return "Can't create form. Form not exist";
}
