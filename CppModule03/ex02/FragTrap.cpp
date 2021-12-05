#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	return ;
}

FragTrap::FragTrap(std::string Name) {
	this->setName(Name);
	this->setHP(100);
	this->setEP(100);
	this->setAD(30);
	this->printInfo();
	std::cout << "FragTrap activated" << std::endl;
}

FragTrap::FragTrap(const FragTrap &raw) {
	*this = raw;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->getName() << " deactivated." << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &raw) {
	this->setName(raw.getName());
	this->setHP(raw.getHP());
	this->setEP(raw.getEP());
	this->setAD(raw.getAD());
	return (*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout << "Give me high five! - " << this->getName() << std::endl;
}