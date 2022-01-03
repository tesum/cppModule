#include "span.hpp"

Span::Span(unsigned int n) : _n(n), _vec() {}

Span::Span(const Span &raw) {
	*this = raw;
}

Span &Span::operator=(const Span &raw) {
	this->_n = raw._n;
	this->_vec = raw._vec;
	return *this;
}

Span::~Span() {}

void Span::print(std::ostream &out) {
	std::vector<int>::iterator i = this->_vec.begin();
	for (; i != this->_vec.end(); i++)
		out << *i << ", ";
}

void Span::addNumber(int num) {
	if (this->_n == this->_vec.size())
		throw std::out_of_range("Can't add. Span is full!");
	this->_vec.push_back(num);
	std::sort(this->_vec.begin(), this->_vec.end());
}

int Span::shortestSpan() {
	if (this->_vec.size() < 2)
		throw std::invalid_argument("Can't use shortest span, size < 2");
	std::vector<int>::iterator i = this->_vec.begin();
	std::vector<int>::iterator k;
	int min = *(i + 1) - *i;
	for (; i != this->_vec.end(); i++) {
		k = i + 1;
		for (; k != this->_vec.end(); k++) {
			if (*k != *i && *k - *i < min)
				min = *k - *i;
		}
	}
	return (min);
}

int Span::longestSpan() {
	if (this->_vec.size() < 2)
		throw std::invalid_argument("Can't use shortest span, size < 2");
	std::vector<int>::iterator i = this->_vec.begin();
	std::vector<int>::iterator k;
	int max = *(i + 1) - *i;
	for (; i != this->_vec.end(); i++) {
		k = i + 1;
		for (; k != this->_vec.end(); k++) {
			if (*k != *i && *k - *i > max)
				max = *k - *i;
		}
	}
	return (max);
}

std::ostream &operator<<(std::ostream &out, Span &raw) {
	raw.print(out);
	return (out);
}