#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:

	public:
		WrongCat();
		WrongCat(const WrongCat &raw);
		WrongCat &operator=(const WrongCat &raw);
		~WrongCat();

		void makeSound() const;
};

#endif