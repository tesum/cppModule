#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name ) {
	Zombie	*horde;

	horde = new Zombie[N];
	for (size_t i = 0; (int)i < N; i++) {
		horde[i].setName(name);
	}
	return horde;
}