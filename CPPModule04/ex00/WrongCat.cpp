#include "WrongCat.hpp"

/* Constructors */
/******************************************************************************************/
WrongCat::WrongCat() : WrongAnimal("Cat") {
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &raw) {
	*this = raw;
}

WrongCat &WrongCat::operator=(const WrongCat &raw) {
	WrongAnimal::operator=(raw);
	return (*this);
}

/* Distructors */
/******************************************************************************************/
WrongCat::~WrongCat() {
	std::cout << "WrongCat distructor called" << std::endl;
}

/* Methods */
/******************************************************************************************/
void WrongCat::makeSound() const {
	std::cout << "meow meow ~" << std::endl;
}