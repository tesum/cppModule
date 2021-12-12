#pragma once

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
	private:
		std::string _type;
	protected:
		AMateria();
		AMateria(std::string const &type);
	public:
		AMateria(const AMateria &raw);
		AMateria &operator=(const AMateria &raw);
		virtual ~AMateria();

		std::string const & getType() const;

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};
