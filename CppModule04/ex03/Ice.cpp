#include "Ice.hpp"

/* Constructors */
/******************************************************************************************/
Ice::Ice() : AMateria("Ice") {
	this->_type = "Ice";
}

Ice::Ice(const Ice &raw) {
	*this = raw;
}

Ice &Ice::operator=(const Ice &raw) {
	this->_type = raw._type;
	return *this;
}

/* Distructor */
/******************************************************************************************/
Ice::~Ice() {}

/* Methods */
/******************************************************************************************/
AMateria *Ice::clone() const {
	AMateria *clone = new Ice();
	return clone;
}