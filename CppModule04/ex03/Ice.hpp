#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		std::string _type;
	public:
		Ice();
		Ice(const Ice &raw);
		Ice &operator=(const Ice &raw);
		~Ice();

		AMateria *clone() const;
};

#endif