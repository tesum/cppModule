#include "mutantstack.hpp"
#include <iostream>
#include <random>
#include <ctime>

int main ()
{
	{
		MutantStack<int> mstack;
		std::cout << std::boolalpha << mstack.empty() << std::endl;
		std::srand(std::time(nullptr));
		for(size_t i = 0; i < 20; ++i) {
			int random_variable = std::rand();
			mstack.push(random_variable % 100);
		}
		std::cout << std::boolalpha << mstack.empty() << std::endl;

		std::cout << "\n\033[32mPrint stack\033[0m\n";
		for(MutantStack<int>::iterator begin = mstack.begin(); begin != mstack.end(); ++begin) {
			std::cout << *begin << ' ';
		}
		std::cout << std::endl;
		std::cout << "Size: " <<mstack.size() << std::endl;

		MutantStack<int> mstack2(mstack);
		mstack2.pop();
		mstack2.pop();
		mstack2.pop();
		mstack2.pop();
		MutantStack<int> mstack3 = mstack2;
		std::cout << "\033[32mPrint stack after 4 delete element from STACK2!\033[0m\n";

		std::cout << "\033[33m----------MSTACK1----------\033[0m" << std::endl;
		for(MutantStack<int>::iterator begin = mstack.begin(); begin != mstack.end(); ++begin) {
			std::cout << *begin << ' ';
		}
		std::cout << std::endl << "\033[33m----------MSTACK2----------\033[0m" << std::endl;
		for(MutantStack<int>::iterator begin = mstack2.begin(); begin != mstack2.end(); ++begin) {
			std::cout << *begin << ' ';
		}
		std::cout << std::endl <<"\033[33m----------MSTACK3----------\033[0m" << std::endl;
		for(MutantStack<int>::iterator begin = mstack3.begin(); begin != mstack3.end(); ++begin) {
			std::cout << *begin << ' ';
		}
		std::cout << std::endl;
		std::cout << "\n\033[32m-----------Sizes-----------\033[0m\n";
		std::cout << "Size stack1: " <<mstack.size() << std::endl;
		std::cout << "Size stack2: " <<mstack2.size() << std::endl;
		std::cout << "Size stack3: " <<mstack3.size() << std::endl;
	}
	{
		std::cout << "\033[33m----------SUBJECT----------\033[0m" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
		return 0;
	}
}