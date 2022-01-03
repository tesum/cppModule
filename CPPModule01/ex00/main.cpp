#include "Zombie.hpp"

int main()
{
	Zombie	*Zombie, *Zombie2;

	Zombie = newZombie("Oleg");
	randomChump("Roma");
	randomChump("Vitalya");

	Zombie2 = newZombie("Dima");
	randomChump("Vitalya");
	delete	Zombie2;
	delete	Zombie;
	return 0;
}
