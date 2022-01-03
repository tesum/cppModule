#include "Replace.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 4)
	{
		std::cout << "Error, incorrect count arguments" << std::endl;
		return (-1);
	}
	Replace	info = Replace(argv[1], argv[2], argv[3]);
	info.replace();
	return (0);
}