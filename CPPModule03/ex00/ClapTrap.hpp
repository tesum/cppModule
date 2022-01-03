#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <iomanip>

class ClapTrap
{
	private:
		std::string		_Name;
		unsigned int	_Hitpoints;
		unsigned int	_Energy_points;
		unsigned int	_Attack_damage;
	public:
		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(const ClapTrap &raw);
		ClapTrap &operator=(ClapTrap const &raw);

		void printInfo();
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName() const;
		unsigned int getHP() const;
		unsigned int getEP() const;
		unsigned int getAD() const;

		void setName(std::string Name);
		void setHP(unsigned int HP);
		void setEP(unsigned int EP);
		void setAD(unsigned int AD);

		~ClapTrap();
};

#endif