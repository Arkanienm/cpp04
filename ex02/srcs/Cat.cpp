#include "../includes/Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
	type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& src)
{
	if (this != &src)
		this->type = src.type;
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain();
	*(this->_brain) = *(src._brain);
	std::cout << "Cat copy assignement operator called" << std::endl;
	return *this;
}

Cat::Cat(const Cat& src) : Animal()
{
	this->type = src.type;
	this->_brain = new Brain(*src._brain);
	std::cout << "Cat copy constructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}