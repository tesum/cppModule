#include "Header.hpp"

void	Contact::printParam(std::string str)
{
	int	len;

	len = str.length();
	if (len > 10)
	{
		for (size_t i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << "." << "|";
	}
	else
	{
		while (len++ < 10)
			std::cout << " ";
		std::cout << str << "|";
	}
}

void	Contact::print(Contact contact)
{
	printParam(contact.firstName);
	printParam(contact.lastName);
	printParam(contact.nickname);
	std::cout << std::endl;
}

void	Contact::printInfo(Contact contact)
{
	std::cout << "First Name: " << contact.firstName << std::endl;
	std::cout << "Last Name: " << contact.lastName << std::endl;
	std::cout << "Nickname: " << contact.nickname << std::endl;
	std::cout << "Phone Number: " << contact.phoneNumber << std::endl;
	std::cout << "Secret Code: " << contact.darkestSecret << std::endl;
}