#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	phoneBook;
	std::string	cmd;

	while (1)
	{
		std::cout << "Input command (add/search/exit):" << std::endl;
		getline(std::cin, cmd, '\n');
		if (cmd == "add")
			phoneBook.add();
		else if (cmd == "search")
			phoneBook.search();
		else if (cmd == "exit")
			exit(0);
		else
			std::cout << "Invalid command! Please enter (add/search/exit)." << std::endl;
	}
	return (0);
}