#include "PresidentialPardonForm.hpp"

/* Constructors */
/******************************************************************************************/
PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form("PresidentialPardonForm", 25, 5) {
		this->_target = target;

		std::cout << this->getName() << " with target " << target << " created." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &raw) : Form(raw), _target(raw._target) {}
/* Disstructor */
/******************************************************************************************/
PresidentialPardonForm::~PresidentialPardonForm() {}

/* Methods */
/******************************************************************************************/
void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	this->Form::execute(executor);
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}