#include "Base.hpp"

int main(void)
{
	std::srand(time(NULL));

	Base *ptr = generate();
	Base &ref = *generate();
	identify(ptr);
	identify(ref);

	std::cout << std::endl << "---------------------" << std::endl << std::endl;

	ptr = generate();
	ref = *ptr;

	identify(ptr);
	identify(ref);
	return 0;
}
