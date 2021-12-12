#include "Character.hpp"

/* Constructors */
/******************************************************************************************/
Character::Character(std::string name) : _name(name) {

	for (size_t i = 0; i < 4; i++) {
		this->_type[i] = NULL;
	}
	std::cout << "Character constructor called" << std::endl;
}

Character::Character(const Character &raw) {
	*this = raw;
}

Character &Character::operator=(const Character &raw) {
	if (this == &raw)
		return *this;
	this->_name = raw._name;
	*this->_type = *raw._type;
	return (*this);
}

/* Distructor */
/******************************************************************************************/
Character::~Character() {
	for (size_t i = 0; i < 4; i++) {
		if (this->_type[i] != NULL) {
			delete this->_type[i];
			this->_type[i] = NULL;
		}
	}
	
}

/* Getters */
/******************************************************************************************/
std::string const &Character::getName() const {
	return (this->_name);
}

/* Methods */
/******************************************************************************************/
void Character::equip(AMateria *m) {
	for (size_t i = 0; i < 4; i++) {
		if (this->_type[i] == NULL) {
			this->_type[i] = m;
			std::cout << "Equiped on " << i << " slot. Type: " << this->_type[i]->getType() << std::endl;
			break ;
		}
	}
}

void Character::unequip(int idx) {
	for (int i = 0; i < 4; i++) {
		if (idx == i) {
			std::cout << "Unequiped " << i << " slot. Type: " << this->_type[i]->getType() << std::endl;
			delete this->_type[i];
			this->_type[i] = NULL;
			break ;
		}
	}
}

void Character::use(int idx, ICharacter &target) {
	if (this->_type[idx])
		this->_type[idx]->use(target);
	else
		std::cout << "Slot is empty." << std::endl;
}