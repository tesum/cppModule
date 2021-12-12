#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form
{
	private:
		std::string _target;
		PresidentialPardonForm();
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &raw);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &raw);
		virtual ~PresidentialPardonForm();

		void execute(Bureaucrat const &executor) const;
};

#endif