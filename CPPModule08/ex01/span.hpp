#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
	private:
		unsigned int _n;
		std::vector<int> _vec;
		Span();
	public:
		Span(unsigned n);
		Span(const Span &raw);
		Span &operator=(const Span &raw);
		~Span();

		void print(std::ostream &out);
		void addNumber(int num);
		template<typename T>
		void addNumber(T start, T end);

		int shortestSpan();
		int longestSpan();
};

std::ostream &operator<<(std::ostream &out, Span &span);

template<typename T>
void Span::addNumber(T start, T end) {
	int dist = end - start;
	if (this->_vec.size() + dist > this->_n)
		throw std::out_of_range("Can't add. Span is full!");
	this->_vec.insert(this->_vec.begin(), start, end);
	std::sort(this->_vec.begin(), this->_vec.end());
}

#endif