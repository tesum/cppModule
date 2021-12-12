#include "Cat.hpp"

/* Constructors */
/******************************************************************************************/
Cat::Cat() : Animal("Cat") {
	std::cout << "Cat constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(std::string type) : Animal("Cat " + type) {
	std::cout << "Cat constructor called with type " << "Cat " + type << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat &raw) {
	*this = raw;
}

Cat &Cat::operator=(const Cat &raw) {
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
Cat::~Cat() {
	std::cout << "Cat destructor called " << std::endl;
	delete this->_brain;
}

/* Methods */
/******************************************************************************************/
void Cat::makeSound() const {
	std::cout << "meow ~" << std::endl;
}