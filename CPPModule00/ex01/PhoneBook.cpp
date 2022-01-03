#include "Header.hpp"

PhoneBook::PhoneBook()
{
	size = 0;
	index = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Phone book is closed and burned" << std::endl;
	return ;
}

void	PhoneBook::add()
{
	std::cout << "Input first name: " << std::endl;
	if (!(getline(std::cin, contacts[index].firstName, '\n')))
		return ;
	std::cout << "Input last name: " << std::endl;
	if (!(getline(std::cin, contacts[index].lastName, '\n')))
		return ;
	std::cout << "Input nickname name: " << std::endl;
	if (!(getline(std::cin, contacts[index].nickname, '\n')))
		return ;
	std::cout << "Input phone number name: " << std::endl;
	if (!(getline(std::cin, contacts[index].phoneNumber, '\n')))
		return ;
	std::cout << "Input darkest secret name: " << std::endl;
	if (!(getline(std::cin, contacts[index].darkestSecret, '\n')))
		return ;
	if (size < 8)
		size++;
	index == 7 ? index = 0 : index++;
}

void	PhoneBook::search()
{
	std::string	index;
	int			i;

	if (size == 0) {
		std::cout << "Your phone book is empty." << std::endl;
		return ;
	}
	std::cout << "|" << std::setw(10) << "Index" << "|" << std::setw(10) << "First name" << "|" << std::setw(10)<< "Last name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << "|" << "x" << std::setfill('x') << std::setw(43) << "|" << std::endl << std::setfill(' ');
	for (size_t i = 0; i < size; i++)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		contacts[i].print(contacts[i]);
	}
	std::cout << "|" << "x" << std::setfill('x') << std::setw(43) << "|" << std::endl << std::setfill(' ');
	std::cout << "What index is needed?" << std::endl;
	if (!(getline(std::cin, index, '\n')))
		return ;
	for (size_t i = 0; i < index.length(); i++) {
		if (!isnumber(index[i]))
			return ;
	}
	i = atoi(index.c_str());
	if (i >= 0 && i < 8)
		if (i < (int)size)
			contacts[i].printInfo(contacts[i]);
		else
			std::cout << "Index not found." << std::endl;
	else
		std::cout << "Invalid index." << std::endl;
}