#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		Intern(const Intern &raw);
		Intern &operator=(const Intern &raw);
	public:
		Intern();
		~Intern();

		Form *makeForm(std::string type, std::string target);

		class FormNotExistException: public std::exception {
			const char *what() const throw();
		};
};

#endif