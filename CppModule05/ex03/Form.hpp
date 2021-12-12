#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		const int _gradeToSignIt;
		const int _gradeToExecuteIt;
		bool _isSigned;
		Form();
		Form &operator=(const Form &raw);
	public:
		Form(std::string name, int gradeToSignIt, int gradeToExecuteIt);
		Form(const Form &raw);
		virtual ~Form();

		std::string getName() const;
		int getGradeToSignIt() const;
		int getGradeToExecuteIt() const;
		bool getIsSigned() const;

		void beSigned(const Bureaucrat &person);
		virtual void execute(Bureaucrat const &executor) const;

		class GradeTooLowException: public std::exception {
			const char *what() const throw();
		};

		class FormAlreadySignedException: public std::exception {
			const char *what() const throw();
		};

		class FormNotSignedExcaption: public std::exception {
			const char *what() const throw();
		};

		class GradeToHighException: public std::exception {
			const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &b);

#endif