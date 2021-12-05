#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	return ;
}

ScavTrap::ScavTrap(std::string Name) {
	this->setName(Name);
	this->setHP(100);
	this->setEP(50);
	this->setAD(20);
	this->printInfo();
	std::cout << "ScavTrap activated" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &raw) {
	*this = raw;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->getName() << " deactivated." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &raw) {
	this->setName(raw.getName());
	this->setHP(raw.getHP());
	this->setEP(raw.getEP());
	this->setAD(raw.getAD());
	return (*this);
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->getName() << " have enterred in Gate keeper mode." << std::endl;
}
