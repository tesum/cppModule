#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "Header.hpp"

class Contact
{
	public:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
		void	print(Contact contact);
		void	printParam(std::string str);
		void	printInfo(Contact contact);
};

#endif