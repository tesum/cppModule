#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <assert.h>

template<class T>
class Array {
	private:
		unsigned int _sizeArr;
		T *_arr;
	public:
		Array() : _sizeArr(0), _arr(NULL) {}
		Array(unsigned int n) {
			this->_arr = new T[n];
			this->_sizeArr = n;
		}
		Array(Array &raw) {
			*this = raw;
		}
		Array &operator=(Array &raw) {
			if (this == &raw)
				return (*this);
			this->_arr = new T[raw._sizeArr];
			this->_sizeArr = raw._sizeArr;
			for (unsigned int i = 0; i < this->_sizeArr; i++) {
				this->_arr[i] = raw._arr[i];
			}
			return (*this);
		}
		T &operator[](unsigned int i) {
			if (i < this->_sizeArr)
				return (this->_arr[i]);
			else
				throw std::out_of_range("Out of range");
		}
		~Array() {
			if (this->_arr)
				delete[] this->_arr;
			this->_arr = NULL;
		}
		int size() { return this->_sizeArr; }
};

#endif