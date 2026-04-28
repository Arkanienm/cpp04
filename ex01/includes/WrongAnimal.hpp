#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &src);
		WrongAnimal& operator=(WrongAnimal const &src);
		~WrongAnimal();
		std::string getType() const;
		void makeSound() const;
	protected:
		std::string type;
};

#endif