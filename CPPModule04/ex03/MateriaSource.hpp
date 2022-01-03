#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_type[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &raw);
		MateriaSource &operator=(const MateriaSource &raw);
		~MateriaSource();

		void learnMateria(AMateria *);
		AMateria *createMateria(std::string const &type);
};

#endif