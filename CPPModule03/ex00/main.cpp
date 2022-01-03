#include "ClapTrap.hpp"

int	main()
{
	ClapTrap german;
	ClapTrap igor("Igor");
	ClapTrap kate("Kate");
	
	german.printInfo();
	german = igor;
	
	kate.attack("Igor");
	igor.takeDamage(kate.getAD());
	igor.printInfo();
	igor.beRepaired(15);
	igor.printInfo();

	return (0);
}