#include "Animal.hpp"

/* Constructors */
/******************************************************************************************/
Animal::Animal() {
	std::cout << "Animal constructor called" << std::endl;
	_type = "animal";
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Animal constructor called with type: " << this->_type << std::endl;
}

Animal::Animal(const Animal &raw) {
	*this = raw;
}

Animal &Animal::operator=(const Animal &raw) {
	this->_type = raw._type;
	return(*this);
}

/* Disstructor */
/******************************************************************************************/
Animal::~Animal() {
	std::cout << "Animal distructor called " << this->_type << std::endl;
}

/* Getters */
/******************************************************************************************/
std::string Animal::getType() const {
	return (this->_type);
}

/* Methods */
/******************************************************************************************/
void Animal::makeSound() const {
	std::cout << "........" << std::endl;
}