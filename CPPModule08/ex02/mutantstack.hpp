#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>

template<typename T>
class MutantStack : public std::stack<T>
{
	private:

	public:
		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack &raw) : std::stack<T>(raw) {}
		MutantStack &operator=(const MutantStack &raw) {
			if (*this != raw)
				std::stack<T>::operator=(raw);
			return (*this);
		}
		~MutantStack() {};

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() { return (this->c.begin()); }
		iterator end() { return (this->c.end()); }

};

#endif