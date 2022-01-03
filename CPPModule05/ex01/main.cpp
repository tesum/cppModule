#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
Bureaucrat	*person = NULL;
	Bureaucrat	*personHigh = NULL;
	Form		*blank = NULL;
	Form		*blank1 = NULL;

	std::cout << std::endl << "\033[33m TEST 1 | make 2 good Form and 1 bad" << std::endl;
	std::cout << "--------------------------------------------------------- \033[0m" << std::endl;
	try
	{
		person = new Bureaucrat("Low Rang", 150);
		personHigh = new Bureaucrat("High Rang", 1);
		blank = new Form("28B", 1 , 50);
		blank1 = new Form("28c", 150 , 50);

		std::cout << std::endl << "Call copy constructor" << std::endl;
		Form	goodCopy(*blank);
		Form	bad("Bad blank", 0, 0);
	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "\033[33m TEST 2 | good Bureaucrat signed form" << std::endl;
	std::cout << "--------------------------------------------------------- \033[0m" << std::endl;
	try
	{
		blank->beSigned(*personHigh);
		person->signForm(*blank1);
	} catch (std::exception & e)
	{
		std::cout << "never print it" << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "\033[33m TEST 3 | good Bureaucrat signed form, but fail" << std::endl;
	std::cout << "--------------------------------------------------------- \033[0m" << std::endl;
	try
	{
		person->signForm(*blank1);
		blank->beSigned(*personHigh);
	} catch (std::exception &e)
	{
		std::cout << personHigh->getName() << " " << e.what() << std::endl;
	}
	std::cout << std::endl;

	delete(person);
	delete(personHigh);
	delete(blank);
	delete(blank1);
	return 0;
}