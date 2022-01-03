#include "ClapTrap.hpp"


ClapTrap::ClapTrap() {
	this->_Name = "noname";
	this->_Hitpoints = 0;
	this->_Energy_points = 0;
	this->_Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string Name) {
	this->_Name = Name;
	this->_Hitpoints = 10;
	this->_Energy_points = 10;
	this->_Attack_damage = 0;
	std::cout << "KAREN: Hello " << Name << std::endl;
	this->printInfo();
}

ClapTrap::ClapTrap(const ClapTrap &raw) {
	*this = raw;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &raw) {
	this->_Name = raw.getName();
	this->_Hitpoints = raw.getHP();
	this->_Energy_points = raw.getEP();
	this->_Attack_damage = raw.getAD();
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Good bye " << this->_Name << std::endl;
}

void ClapTrap::printInfo() {
	std::string name = "Name: " + _Name;
	std::string HP = "Hitpoints: " + std::to_string(_Hitpoints);
	std::string energy = "Enegry points: " + std::to_string(_Energy_points);
	std::string attack = "Attack damage: " + std::to_string(_Attack_damage);

	int i = 0;
	int len[4] = {name.length(), HP.length(), energy.length(), attack.length()};
	for (size_t k = 0; k < 4; k++) {
		if (i < len[k])
			i = len[k];
	}
	i++;

	std::cout << "x" << std::setfill('-') << std::setw(i) << "x" << std::endl << std::setfill(' ');
	std::cout << "|" << name << std::setw(i - len[0]) << " |" << std::endl;
	std::cout << "|" << HP << std::setw(i - len[1]) << " |" << std::endl;
	std::cout << "|" << energy << std::setw(i - len[2]) << "|" << std::endl;
	std::cout << "|" << attack << std::setw(i - len[3]) << "|" << std::endl;
	std::cout << "x" << std::setfill('-') << std::setw(i) << "x" << std::endl << std::setfill(' ');
}

void ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << this->_Name << " attack " << target << ", causing "
		<< this->_Attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->_Hitpoints -= amount;
	std::cout << "ClapTrap " << this->_Name << " got attacked, takes " << amount << " damedges."
		<< " Now we have " << this->_Hitpoints << " hitpoints." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->_Hitpoints += amount;
	std::cout << "ClapTrap " << this->_Name << " healing on " << amount << " hitpoints."
		<< " Now we have " << this->_Hitpoints << " hitpoints." << std::endl;
}


std::string ClapTrap::getName() const {
	return (this->_Name);
}

unsigned int ClapTrap::getHP() const {
	return (this->_Hitpoints);
}

unsigned int ClapTrap::getEP() const {
	return (this->_Energy_points);
}

unsigned int ClapTrap::getAD() const {
	return (this->_Attack_damage);
}

void ClapTrap::setName(std::string Name) {
	this->_Name = Name;
}

void ClapTrap::setHP(unsigned int HP) {
	this->_Hitpoints = HP;
}

void ClapTrap::setEP(unsigned int EP) {
	this->_Energy_points = EP;
}

void ClapTrap::setAD(unsigned int AD) {
	this->_Attack_damage = AD;
}