#include "WrongAnimal.hpp"

/* Constructors */
/******************************************************************************************/
WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal constructor called" << std::endl;
	_type = "animal";
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << "WrongAnimal constructor called with type: " << this->_type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &raw) {
	*this = raw;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &raw) {
	this->_type = raw._type;
	return (*this);
}

/* Distructors */
/******************************************************************************************/
WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal distructor called" << std::endl;
}

/* Getters */
/******************************************************************************************/
std::string WrongAnimal::getType() const {
	return (this->_type);
}

/* Methods */
/******************************************************************************************/
void WrongAnimal::makeSound() const {
	std::cout << "..<wrong>.." << std::endl;
}