#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void iter(T *array, const size_t len, void func(T const &x)) {
	for (size_t i = 0; i < len; i++) {
		func(array[i]);
	}
}

class Fixed {
	private:
		double _n;
	public:
		Fixed(double n) : _n(n) {}
		double get() const { return this->_n; }
};

std::ostream &operator<<(std::ostream &out, Fixed const &rhs) { out << rhs.get(); return out; }

template<typename T>
void print(T &a) {
	std::cout << a << std::endl;
}
#endif