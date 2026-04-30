#include "../includes/Brain.hpp"

Brain::Brain()
{
}

Brain::~Brain()
{
}

Brain& Brain::operator=(Brain const &src)
{
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = src.ideas[i];
	}
	return *this;
}

Brain::Brain(Brain const &src)
{
	*this = src;
}
