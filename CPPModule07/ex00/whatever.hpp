#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <cmath>

template<typename T>
T min(const T &a, const T &b) {
	return a <= b ? a : b;
}

template<typename T>
T max(const T &a, const T &b) {
	if (a == b)
		return b;
	return a >= b ? a : b;
}

template<typename T>
void swap(T &a, T &b) {
	T c = a;
	a = b;
	b = c;
}

class Fixed {
	private:
		int _n;
	public:
		Fixed(int n) : _n(n) {}
		bool operator==(Fixed const &rhs) const { return (this->_n == rhs._n); }
		bool operator!=(Fixed const &rhs) const { return (this->_n != rhs._n); }
		bool operator>(Fixed const &rhs) const { return (this->_n > rhs._n); }
		bool operator<(Fixed const &rhs) const { return (this->_n < rhs._n); }
		bool operator>=(Fixed const &rhs) const { return (this->_n >= rhs._n); }
		bool operator<=(Fixed const &rhs) const { return (this->_n <= rhs._n); }
		int getNum() {
			return _n;
		}
};

std::ostream &operator<<(std::ostream &out, Fixed &value) {
	out << value.getNum();
	return out;
}

#endif