#include "Karen.hpp"

int main(int argc, char **argv) {
	
	Karen karen;

	if (argc == 2) {
		karen.complain(argv[1]);
		return 0;
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return (1);
}