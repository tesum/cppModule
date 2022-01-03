#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class Form;

class RobotomyRequestForm : public Form
{
	private:
		std::string _target;
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &raw);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &raw);
		virtual ~RobotomyRequestForm();

		void execute(Bureaucrat const &executor) const;
};

#endif