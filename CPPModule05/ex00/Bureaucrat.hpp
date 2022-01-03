#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
	private:
		std::string	_name;
		int			_grade;
		Bureaucrat();
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &raw);
		Bureaucrat &operator=(const Bureaucrat &raw);
		~Bureaucrat();

		std::string getName() const;
		int getGrade() const;

		void upGrade();
		void downGrade();

		class GradeTooHighException : public std::exception {
			const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &b);

#endif