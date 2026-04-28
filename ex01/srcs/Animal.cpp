#include "../includes/Animal.hpp"
#include <iostream>

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& src)
{
	std::cout << "Animal copy assignement operator called" << std::endl;
	if (this != &src)
		this->type = src.type;
	return *this;
}

Animal::Animal(const Animal& src)
{
	*this = src;
	std::cout << "Animal copy constructor called" << std::endl;
}

void Animal::makeSound() const
{
}

std::string Animal::getType() const
{
	return this->type;
}