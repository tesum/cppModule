#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

# include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
	private:

	public:
		WrongDog();
		WrongDog(const WrongDog &raw);
		WrongDog &operator=(const WrongDog &raw);
		~WrongDog();

		void makeSound() const;
};

#endif