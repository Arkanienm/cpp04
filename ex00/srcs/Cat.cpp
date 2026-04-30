#include "../includes/Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& src)
{
	if (this != &src)
		this->type = src.type;
	std::cout << "Cat copy assignement operator called" << std::endl;
	return *this;
}

Cat::Cat(const Cat& src) : Animal()
{
	*this = src;
	std::cout << "Cat copy constructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}