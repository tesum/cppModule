#pragma once

#include "AMateria.hpp"

class AMateria;

class ICharacter
{
	private:

	public:
		virtual ~ICharacter();
		virtual std::string const &getName() const = 0;
		virtual void equip(AMateria *m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter &target);
};
