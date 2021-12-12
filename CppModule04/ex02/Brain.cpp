#include "Brain.hpp"

/* Constructors */
/******************************************************************************************/
Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &brain) {
	*this = brain;
}

Brain &Brain::operator=(const Brain &brain) {
	for (size_t i = 0; i < 100; i++) {
		_ideas[i] = brain._ideas[i];
	}
	return *this;
}

/* Distructors */
/******************************************************************************************/
Brain::~Brain() {
	std::cout << "Brain distructor called" << std::endl;
}

/* Getters */
/******************************************************************************************/
std::string *Brain::getIdeas() {
	return (_ideas);
}

/* Methods */
/******************************************************************************************/