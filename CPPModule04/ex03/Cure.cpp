#include "Cure.hpp"

/* Constructors */
/******************************************************************************************/
Cure::Cure() : AMateria("Cure") {
	this->_type = "Cure";
}

Cure::Cure(const Cure &raw) {
	*this = raw;
}

Cure &Cure::operator=(const Cure &raw) {
	this->_type = raw._type;
	return *this;
}

/* Distructor */
/******************************************************************************************/
Cure::~Cure() {}

/* Methods */
/******************************************************************************************/
AMateria *Cure::clone() const {
	AMateria *clone = new Cure();
	return clone;
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}