#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap german("German");
	DiamondTrap kate("Kate");

	std::cout << "------------------------------------" << std::endl << std::endl;
	german.attack("Kate");
	kate.takeDamage(german.getAD());
	kate.beRepaired(20);
	german.highFivesGuys();
	german.whoAmI();
	kate.printInfo();
	std::cout << "------------------------------------" << std::endl << std::endl;
	return (0);
}