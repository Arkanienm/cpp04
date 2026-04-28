#include "../includes/WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
	std::cout << "WrongAnimal copy assignement operator called" << std::endl;
	if (this != &src)
		this->type = src.type;
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	*this = src;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
}

std::string WrongAnimal::getType() const
{
	return this->type;
}