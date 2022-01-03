#include "MateriaSource.hpp"

/* Constructors */
/******************************************************************************************/
MateriaSource::MateriaSource() {
	for (size_t i = 0; i < 4; i++) {
		this->_type[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &raw) {
	*this = raw;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &raw) {
	if (this == &raw)
		return *this;
	*this->_type = *raw._type;
	return *this;
}

/* Distructor */
/******************************************************************************************/
MateriaSource::~MateriaSource() {
	for (size_t i = 0; i < 4; i++) {
		if (this->_type[i] != NULL)
			delete this->_type[i];
	}
	
}

/* Methods */
/******************************************************************************************/
void MateriaSource::learnMateria(AMateria *m) {
	for (size_t i = 0; i < 4; i++) {
		if (this->_type[i] == NULL) {
			std::cout << "learning materia " << i << ". Type: " << m->getType() << std::endl;
			this->_type[i] = m->clone();
			break ;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	for (size_t i = 0; i < 4; i++) {
		if (this->_type[i] != NULL && this->_type[i]->getType() == type)
			return (this->_type[i]->clone());
	}
	return NULL;
}