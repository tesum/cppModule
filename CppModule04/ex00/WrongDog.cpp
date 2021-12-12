#include "WrongDog.hpp"

/* Constructors */
/******************************************************************************************/
WrongDog::WrongDog() : WrongAnimal("Dog") {
	std::cout << "WrongDog constructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &raw) {
	*this = raw;
}

WrongDog &WrongDog::operator=(const WrongDog &raw) {
	WrongAnimal::operator=(raw);
	return (*this);
}

/* Distructors */
/******************************************************************************************/
WrongDog::~WrongDog() {
	std::cout << "WrongDog distructor called" << std::endl;
}

/* Methods */
/******************************************************************************************/
void WrongDog::makeSound() const {
	std::cout << "woof woof ~" << std::endl;
}