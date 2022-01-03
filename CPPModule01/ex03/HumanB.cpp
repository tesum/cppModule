#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	return ;
}

HumanB::~HumanB() {
	return ;
}

void HumanB::attack() {
	if (_weapon == NULL)
		std::cout << _name << " can't attack without weapon" << std::endl;
	else
		std::cout << _name << " attacks with his" << _weapon->getType() << std::endl;
	return ;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}