#ifndef SHRUBBERYCREATIONFROM_HPP
#define SHRUBBERYCREATIONFROM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <fstream>

class Form;

class ShrubberyCreationForm : public Form
{
	private:
		std::string _target;
		ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &raw);
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &raw);
		virtual ~ShrubberyCreationForm();

		void execute(Bureaucrat const &executor) const;
};

#endif