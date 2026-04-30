#include "../includes/Dog.hpp"
#include <iostream>

Dog::Dog() : Animal()
{
	type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(Dog const &src)
{
	if (this != &src)
		this->type = src.type;
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain();
	*(this->_brain) = *(src._brain);
	std::cout << "Dog copy assignement operator called" << std::endl;
	return *this;
}

Dog::Dog(const Dog& src) : Animal()
{
	this->type = src.type;
	this->_brain = new Brain(*src._brain);
	std::cout << "Dog copy constructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}