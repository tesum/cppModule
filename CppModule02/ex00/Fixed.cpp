#include "Fixed.hpp"


Fixed::Fixed()
{
	std::cout << "Default conctructed called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed &raw)
{
	std::cout << "Copy conctructed called" << std::endl;
	*this = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
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