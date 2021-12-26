#include "iter.hpp"

int main()
{
	int arr[] = {0, 1, 2, 3, 4};
	::iter(arr, 5, ::print);

	std::cout << std::endl;

	std::string arr_str[] = {"Hello,", "how re u?", "criage"};
	::iter(arr_str, 4, ::print);

	std::cout << std::endl;

	Fixed arr_fix[] = {21.42, 0, 42.21};
	::iter(arr_fix, 3, ::print);
	return 0;
}
