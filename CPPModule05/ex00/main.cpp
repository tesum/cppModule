#include "Bureaucrat.hpp"

int main(void)
{

	/****************************************************************/
	/************* Grade more than 1 and less than 150 **************/
	/****************************************************************/
	Bureaucrat *person = NULL;
	Bureaucrat *personHigh = NULL;

	std::cout << std::endl << "\033[33m TEST 1 | make 2 good Bureaucrat and 1 bad" << std::endl;
	std::cout << "--------------------------------------------------------- \033[0m" << std::endl;
	try
	{
		person = new Bureaucrat("Low Rang", 150);
		personHigh = new Bureaucrat("High Rang", 1);

		// Error -> catch
		Bureaucrat Bad("Bad to high", 0);
		std::cout << "never print it" << std::endl;
		Bureaucrat Never("never do this", 322);
	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "\033[33m TEST 2 | 2 good Bureaucrat increment and decrement" << std::endl;
	std::cout << "--------------------------------------------------------- \033[0m" << std::endl;
	try
	{
		std::cout << "Before increment " << *person << std::endl;
		person->upGrade();
		std::cout << "\033[32mAfter increment" << *person << "\033[0m" << std::endl;

		std::cout << "Before decrement " << *personHigh << std::endl;
		personHigh->downGrade();
		std::cout << "\033[32mAfter decrement" << *personHigh << "\033[0m" << std::endl;

		personHigh->upGrade();
		person->downGrade();
		std::cout << std::endl << "Make grade back " << std::endl << *person << std::endl << *personHigh << std::endl;
	} catch (std::exception &e)
	{
		std::cout << "never print it" << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "\033[33m TEST 3 | 2 good Bureaucrat increment and decrement, but fail" << std::endl;
	std::cout << "--------------------------------------------------------- \033[0m" << std::endl;
	try
	{
		personHigh->upGrade();
		std::cout << "never print it" << std::endl;
		person->downGrade();
	} catch (std::exception &e)
	{
		std::cout << personHigh->getName() << ":" << e.what() << std::endl;
	}

	std::cout << std::endl << "\033[33m TEST 4 | 2 good Bureaucrat increment and decrement, but fail" << std::endl;
	std::cout << "--------------------------------------------------------- \033[0m" << std::endl;
	try
	{
		person->downGrade();
		std::cout << "never print it" << std::endl;
		personHigh->upGrade();
	} catch (std::exception &e)
	{
		std::cout << person->getName() << ":" << e.what() << std::endl << std::endl; 
	}

	delete(person);
	delete(personHigh);
	return 0;
}