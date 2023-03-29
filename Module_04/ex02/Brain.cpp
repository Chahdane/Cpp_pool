#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor has been called" << std::endl;
}

Brain::Brain(const Brain & rhs)
{
	std::cout << "Copy constructor for Brain called" << std::endl;
    *this = rhs;
}

Brain & Brain::operator=(const Brain & rhs)
{
	std::cout << "Assignement operator for Brain called" << std::endl;
    for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor has been called" << std::endl;
}