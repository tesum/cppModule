#include "Zombie.hpp"

int main()
{
	Zombie	*zombieArmy;

	zombieArmy = zombieHorde(15, "OLEGYS");
	delete	[] zombieArmy;
	return 0;
}
