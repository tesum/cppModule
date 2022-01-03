#include "Dog.hpp"

/* Constructors */
/******************************************************************************************/
Dog::Dog() : Animal("Dog") {
	std::cout << "Dog constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(std::string type) : Animal("Dog " + type) {
	std::cout << "Dog constructor called with type " << "Dog " + type << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog &raw) {
	*this = raw;
}

Dog &Dog::operator=(const Dog &raw) {
	if (this == &raw)
		return *this;
	Animal::operator=(raw);
	delete this->_brain;
	if (raw._brain)
		this->_brain = new Brain(*raw._brain);
	return (*this);
}

/* Distructors */
/******************************************************************************************/
Dog::~Dog() {
	std::cout << "Dog distructor called" << std::endl;
	delete this->_brain;
}

/* Methods */
/******************************************************************************************/
void Dog::makeSound() const {
	std::cout << "woof ~" << std::endl;
}