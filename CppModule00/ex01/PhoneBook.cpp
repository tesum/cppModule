#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	size = 0;
	index = 0;
}

// PhoneBook::~PhoneBook()
// {
// 	std::cout << "Phone book is closed and burned" << std::endl;
// 	return ;
// }

void	PhoneBook::add()
{
	std::cout << "Input first name: " << std::endl;
	getline(std::cin, contacts[index].firstName, '\n');
	std::cout << "Input last name: " << std::endl;
	getline(std::cin, contacts[index].lastName, '\n');
	std::cout << "Input nickname name: " << std::endl;
	getline(std::cin, contacts[index].nickname, '\n');
	std::cout << "Input phone number name: " << std::endl;
	getline(std::cin, contacts[index].phoneNumber, '\n');
	std::cout << "Input darkest secret name: " << std::endl;
	getline(std::cin, contacts[index].darkestSecret, '\n');
	if (size < 8)
		size++;
	index == 7 ? index = 0 : index++;
}

void	PhoneBook::printParam(std::string str)
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

void	PhoneBook::print(Contact contact)
{
	printParam(contact.firstName);
	printParam(contact.lastName);
	printParam(contact.nickname);
	std::cout << std::endl;
}

void	PhoneBook::printInfo(Contact contact)
{
	std::cout << "First Name: " << contact.firstName << std::endl;
	std::cout << "Last Name: " << contact.lastName << std::endl;
	std::cout << "Nickname: " << contact.nickname << std::endl;
	std::cout << "Phone Number: " << contact.phoneNumber << std::endl;
	std::cout << "Secret Code: " << contact.darkestSecret << std::endl;
}

void	PhoneBook::search()
{
	std::string	index;
	int			i;

	std::cout << "|" << std::setw(10) << "Index" << "|" << std::setw(10) << "First name" << "|" << std::setw(10)<< "Last name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << "|" << "x" << std::setfill('x') << std::setw(43) << "|" << std::endl << std::setfill(' ');
	for (size_t i = 0; i < size; i++)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		print(contacts[i]);
	}
	std::cout << "|" << "x" << std::setfill('x') << std::setw(43) << "|" << std::endl << std::setfill(' ');
	std::cout << "What index is needed?" << std::endl;
	getline(std::cin, index, '\n');
	i = atoi(index.c_str());
	if (i >= 0 && i < 8)
		if (i < (int)size)
			printInfo(contacts[i]);
		else
			std::cout << "Index not found." << std::endl;
	else
		std::cout << "Invalid index." << std::endl;
}