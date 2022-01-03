#include "RobotomyRequestForm.hpp"

/* Constructors */
/******************************************************************************************/
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target) {
	std::cout << this->getName() << " with target " << target << " created." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &raw) : Form(raw), _target(raw._target) {}

/* Disstructor */
/******************************************************************************************/
RobotomyRequestForm::~RobotomyRequestForm() {}

/* Methods */
/******************************************************************************************/
void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	this->Form::execute(executor);
	std::cout << "Makes some drilling noises, and tell us that" << this->_target;
	int num = std::rand();
	if (num % 2 == 0)
		std::cout << " robotomized successfully" << std::endl;
	else
		std::cout << " robotomized unsuccessfully" << std::endl;
}
