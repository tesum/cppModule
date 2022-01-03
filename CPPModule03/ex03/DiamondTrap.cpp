#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	return ;
}

DiamondTrap::DiamondTrap(std::string Name): ScavTrap(Name), FragTrap(Name) {
	this->_Name = Name + "_clap_name";
	this->setHP(FragTrap::getHP());
	this->setEP(ScavTrap::getEP());
	this->setAD(FragTrap::getAD());
	this->printInfo();
	std::cout << "DiamondTrap " << this->getName() << " activated." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &raw) {
	*this = raw;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &raw) {
	this->setName(raw.getName());
	this->setHP(raw.getHP());
	this->setEP(raw.getEP());
	this->setAD(raw.getAD());
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->getName() << " deactivated." << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "Diamond name " << ClapTrap::getName() << std::endl;
	std::cout << "ClapTrap name " << this->_Name  << std::endl;
}