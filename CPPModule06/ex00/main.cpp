#include "Convert.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 2) {
		std::cout << "Only with 1 arg." << std::endl;
		return (1);
	}
	Convert num(argv[1]);
	num.toChar();
	num.toInt();
	num.toFloat();
	num.toDouble();
	return 0;
}
