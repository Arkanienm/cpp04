#include "../includes/Dog.hpp"
#include <iostream>

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(Dog const &src)
{
	if (this != &src)
		this->type = src.type;
	std::cout << "Dog copy assignement operator called" << std::endl;
	return *this;
}

Dog::Dog(const Dog& src) : Animal()
{
	*this = src;
	std::cout << "Dog copy constructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}