#include "Zombie.hpp"

Zombie::Zombie() {
	return ;
}

Zombie::~Zombie() {
	std::cout << _name << " Destroy" << std::endl;
}

void Zombie::setName(std::string name) {
	_name = name;
	announce();
}

void Zombie::announce() {
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}