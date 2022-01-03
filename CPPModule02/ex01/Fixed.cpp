#include "Fixed.hpp"

// MARK: Constructors 
Fixed::Fixed() {
	std::cout << "Default conctructed called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed &raw) {
	std::cout << "Copy conctructed called" << std::endl;
	*this = raw;
}

Fixed::Fixed(const int &raw) {
	std::cout << "Int conctructed called" << std::endl;
	this->_value = raw << this->_fractional_bits;
}

Fixed::Fixed(const float &raw) {
	std::cout << "Float conctructed called" << std::endl;
	this->_value = roundf(raw * ( 1 << this->_fractional_bits));
}

// MARK: Destructor
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

Fixed &Fixed::operator=(Fixed const &raw) {
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(raw.getRawBits());
	return (*this);
}

float Fixed::toFloat(void) const {
	return (roundf(this->_value) / ( 1 << this->_fractional_bits));
}

int Fixed::toInt(void) const {
	return (this->_value >> this->_fractional_bits);
}

std::ostream & operator<<(std::ostream & out, Fixed const & value) {
	out << value.toFloat();
	return (out);
}