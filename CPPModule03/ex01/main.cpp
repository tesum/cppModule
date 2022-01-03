#include "ScavTrap.hpp"

int	main()
{
	ClapTrap german;
	ScavTrap igor("Igor");
	ScavTrap kate("Kate");
	
	german.printInfo();
	german = igor;
	std::cout << "German WTF?" << std::endl;
	german.printInfo();
	
	kate.attack("Igor");
	igor.takeDamage(kate.getAD());
	igor.printInfo();
	igor.beRepaired(15);
	igor.printInfo();

	kate.guardGate();
	return (0);
}