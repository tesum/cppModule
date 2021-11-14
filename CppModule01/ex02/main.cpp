#include <string>
#include <iostream>


int main() {

	std::string str1 = "HI THIS IS BRAIN";
	std::string str2 = "HI THIS IS BRAIN 1";
	std::string *stringPTR = &str1;
	std::string &stringREF = *stringPTR;

	std::cout << "str1 = " << str1 << "; adress = " << &str1 << std::endl;
	std::cout << "str2 = " << str2 << "; adress = " << &str2 << std::endl << std::endl;

	std::cout << "*strPTR = " << *stringPTR << "; adress = " << &stringPTR << std::endl;
	std::cout << "strPTR = " << stringPTR << "; adress = " << &stringPTR << std::endl << std::endl;

	std::cout << "&strREF = " << stringREF << "; adress = " << &stringREF << std::endl << std::endl;

	stringREF = str2;
	std::cout << "Change REF and PTR to str2" << std::endl;
	std::cout << "&strREF = " << stringREF << "; adress = " << &stringREF << std::endl << std::endl;

	stringPTR = &str2;
	std::cout << "*strPTR = " << *stringPTR << "; adress = " << &stringPTR << std::endl;
	std::cout << "strPTR = " << stringPTR << "; adress = " << &stringPTR << std::endl;
	return 0;
}