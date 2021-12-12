#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	std::srand(time(NULL));

	Bureaucrat person("person", 1);
	Bureaucrat person1("person1", 25);
	Intern lobanov;
	std::cout << "<+========================+>" << std::endl;

	Form *tree = lobanov.makeForm("shrubbery creation", "home");
	tree->beSigned(person);
	tree->execute(person1);
	
	std::cout << "<+========================+>" << std::endl;

	Form *president = lobanov.makeForm("presidential pardon", "person1");
	person.signForm(*president);
	president->execute(person);

	std::cout << "<+========================+>" << std::endl;

	Form *botBlank = lobanov.makeForm("robotomy request", "botBlank");
	botBlank->beSigned(person);
	botBlank->execute(person1);
	person1.executeForm(*botBlank);
	person1.executeForm(*botBlank);

	// lobanov.makeForm("abort", "end of programm");
	std::cout << "<+========================+>" << std::endl;

	try {
		person1.executeForm(*president);
	}
	catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "<+========================+>" << std::endl;

	try {
		RobotomyRequestForm botBlank1 = RobotomyRequestForm("botBlank1");
		std::cout << botBlank1.getName() << std::endl;
		botBlank1.execute(person);
	}
	catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "<+========================+>" << std::endl;

	try	{
		PresidentialPardonForm president1 = PresidentialPardonForm("person1");
		std::cout << president1.getName() << std::endl;
		person.signForm(president1);
		president1.execute(person1);
	}
	catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "<+========================+>" << std::endl;

	try {
		PresidentialPardonForm president2 = PresidentialPardonForm("person1");
		std::cout << president2.getName() << std::endl;
		person.signForm(president2);
		person1.executeForm(president2);
	}
	catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}

	delete tree;
	delete president;
	// delete botBlank;

	return (0);
}