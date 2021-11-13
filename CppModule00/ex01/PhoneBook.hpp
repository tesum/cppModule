#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include <cstring>
# include <iomanip>  
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
		size_t	size;
		size_t	index;
	public:
		PhoneBook(/* args */);
		void	add();
		void	search();
		void	print(Contact contact);
		void	printParam(std::string str);
		void	printInfo(Contact contact);
};

#endif