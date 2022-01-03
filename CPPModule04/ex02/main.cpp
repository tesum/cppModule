#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
	const Animal *j = new Dog();
	Animal *k;

	k = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << "******************************************************************************************" << std::endl;
	Cat i("vasya");
	Cat testCopy;
	testCopy = i;
	std::cout << i.getType() << " " << std::endl;
	std::cout << &testCopy << " adrs brain = " << testCopy.getIdeas() << std::endl;
	std::cout << &i << " adrs brain = " << i.getIdeas() << std::endl;
	std::cout << "******************************************************************************************" << std::endl;
	testCopy.makeSound();
	i.makeSound();
	j->makeSound();

	delete j;
}