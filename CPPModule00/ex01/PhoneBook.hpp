#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Header.hpp"
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
		size_t	size;
		size_t	index;
	public:
		PhoneBook();
		~PhoneBook();
		void	add();
		void	search();
};

#endif