#include "Convert.hpp"


Convert::Convert(const char *input) {
	char *str;
	this->_num = std::strtod(input, &str);
	if (str == input)
		throw ConvertException("Only the decimal notation will be used");
	if (*str && str[0] != 'f')
		throw ConvertException("You have junk after numbers");
}

Convert::Convert(const Convert &raw) {
	*this = raw;
}

Convert &Convert::operator=(const Convert &raw) {
	this->_num = raw._num;
	return (*this);
}

Convert::~Convert() {}

void Convert::toChar() {
	std::cout << "char: ";
	if (isprint(this->_num)) {
		char x = static_cast<char>(this->_num);
		std::cout << "'" << x << "'" << std::endl;
	} else if (this->_num < 0 || this->_num > UCHAR_MAX || isnan(this->_num) || isinf(this->_num)) {
		std::cout << "impossible" << std::endl;
	} else {
		std::cout << "Non displayable" << std::endl;
	}
}

void Convert::toInt() {
	std::cout << "int: ";
	if (isnan(this->_num) || isinf(this->_num))
		std::cout << "impossible" << std::endl;
	else if (this->_num < INT_MIN || this->_num > INT_MAX)
		std::cout << "Overflow" << std::endl;
	else {
		int x = static_cast<int>(this->_num);
		if (this->_num != 0 && x == 0)
			std::cout << "Overflow" << std::endl;
		else
			std:: cout << x << std::endl;
	}
}

void Convert::toDouble() {
	std::cout << "double: ";
	if (!isnan(this->_num) && !isinf(this->_num) && (this->_num < INT_MIN || this->_num > __DBL_MAX__))
		std::cout << "Overflow" << std::endl;
	else {
		double x = static_cast<double>(this->_num);
		if (this->_num != 0 && x == 0)
			std::cout << "Overflow" << std::endl;
		else 
			std::cout << std::fixed << std::setprecision(1) << x << std::endl;
	}
}

void Convert::toFloat() {
	std::cout << "float: ";
	if (!isnan(this->_num) && !isinf(this->_num) && (this->_num < INT_MIN || this->_num > __FLT_MAX__))
		std::cout << "Overflow" << std::endl;
	else {
		double x = static_cast<float>(this->_num);
		if (this->_num != 0 && x == 0)
			std::cout << "Overflow" << std::endl;
		else 
			std::cout << std::fixed << std::setprecision(1) << x << "f" << std::endl;
	}
}

Convert::ConvertException::ConvertException(const char *str) : _error(str) {}
const char *Convert::ConvertException::what() const throw() { return (this->_error); }
Convert::ConvertException::~ConvertException() throw() {}