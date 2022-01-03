#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	phoneBook;
	std::string	cmd;

	while (1)
	{
		std::cout << "Input command (ADD/SEARCH/EXIT):" << std::endl;
		if (!(getline(std::cin, cmd, '\n')))
			return 0;
		if (cmd == "ADD")
			phoneBook.add();
		else if (cmd == "SEARCH")
			phoneBook.search();
		else if (cmd == "EXIT")
			exit(0);
		else
			std::cout << "Invalid command! Please enter (ADD/SEARCH/EXIT)." << std::endl;
	}
	return (0);
}