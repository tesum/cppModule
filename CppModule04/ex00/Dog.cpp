#include "Dog.hpp"

/* Constructors */
/******************************************************************************************/
Dog::Dog() : Animal("Dog") {
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal("Dog " + type) {
	std::cout << "Dog constructor called with type " << "Dog " + type << std::endl;
}

Dog::Dog(const Dog &raw) {
	*this = raw;
}

Dog &Dog::operator=(const Dog &raw) {
	Animal::operator=(raw);
	return (*this);
}

/* Distructors */
/******************************************************************************************/
Dog::~Dog() {
	std::cout << "Dog distructor called" << std::endl;
}

/* Methods */
/******************************************************************************************/
void Dog::makeSound() const {
	std::cout << "woof ~" << std::endl;
}