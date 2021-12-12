#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << std::endl;

	ICharacter *me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("Cure");
	me->equip(tmp);

	tmp = src->createMateria("Ice");
	me->equip(tmp);

	std::cout << std::endl;

	me->unequip(1);
	std::cout << std::endl;

	ICharacter* bob = new Character("bob");
	std::cout << std::endl;

	me->use(0, *bob);
	me->use(1, *bob); 
	delete bob;
	delete me;
	delete src;
	return 0;
}