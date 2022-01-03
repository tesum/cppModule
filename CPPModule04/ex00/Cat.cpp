#include "Cat.hpp"

/* Constructors */
/******************************************************************************************/
Cat::Cat() : Animal("Cat") {
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal("Cat " + type) {
	std::cout << "Cat constructor called with type " << "Cat " + type << std::endl;
}

Cat::Cat(const Cat &raw) {
	*this = raw;
}

Cat &Cat::operator=(const Cat &raw) {
	Animal::operator=(raw);
	return (*this);
}

/* Distructors */
/******************************************************************************************/
Cat::~Cat() {
	std::cout << "Cat destructor called " << std::endl;
}

/* Methods */
/******************************************************************************************/
void Cat::makeSound() const {
	std::cout << "meow ~" << std::endl;
}