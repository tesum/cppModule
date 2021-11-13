#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (size_t i = 1; i < (size_t)argc; i++)
		{
			for (size_t j = 0; j < strlen(argv[i]); j++)
			{
				argv[i][j] = std::toupper(argv[i][j]);
				std::cout << argv[i][j];
			}
			std::cout << " ";
		}
	}
	std::cout << std::endl;
	return (0);
}	
