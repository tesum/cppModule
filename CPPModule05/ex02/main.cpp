#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	try
	{
		std::cout << std::endl << "\033[33m TEST 1 | PresidentialPardonForm all ok" << std::endl;
		std::cout << "--------------------------------------------------------- \033[0m" << std::endl;
		{
			PresidentialPardonForm form1("1A");
			Bureaucrat bureaucrat1("Oleg", 1);
			form1.beSigned(bureaucrat1);
			bureaucrat1.executeForm(form1);
			form1.execute(bureaucrat1);
		}
		
		std::cout << std::endl << "\033[33m TEST 2 | RobotomyRequestForm all ok" << std::endl;
		std::cout << "--------------------------------------------------------- \033[0m" << std::endl;
		{
			RobotomyRequestForm form2("2A");
			Bureaucrat bureaucrat2("Oleg", 1);
			form2.beSigned(bureaucrat2);
			bureaucrat2.executeForm(form2);
			form2.execute(bureaucrat2);
		}
		std::cout << std::endl << "\033[33m TEST 3 | ShrubberyCreationForm all ok" << std::endl;
		std::cout << "--------------------------------------------------------- \033[0m" << std::endl;
		{
			ShrubberyCreationForm form3("3A");
			Bureaucrat bureaucrat3("Oleg", 1);
			form3.beSigned(bureaucrat3);
			bureaucrat3.executeForm(form3);
			form3.execute(bureaucrat3);
		}
		std::cout << std::endl << "\033[33m TEST 4 | bureaucrat low lvl for form execute" << std::endl;
		std::cout << "--------------------------------------------------------- \033[0m" << std::endl;
		{
			PresidentialPardonForm form4("4A");
			Bureaucrat bureaucrat4("Oleg", 6);
			form4.beSigned(bureaucrat4);
			bureaucrat4.executeForm(form4);
		}
		std::cout << std::endl << "\033[33m TEST 5 | form not signed" << std::endl;
		std::cout << "--------------------------------------------------------- \033[0m" << std::endl;
		{
			ShrubberyCreationForm form6("6A");
			Bureaucrat bureaucrat6("Oleg", 50);
			bureaucrat6.executeForm(form6);
			form6.beSigned(bureaucrat6);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}