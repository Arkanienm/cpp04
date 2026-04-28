#include "../includes/WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
	if (this != &src)
		this->type = src.type;
	std::cout << "WrongCat copy assignement operator called" << std::endl;
	return *this;
}

WrongCat::WrongCat(const WrongCat& src)
{
	*this = src;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Meow" << std::endl;
}