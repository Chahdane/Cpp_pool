#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "Default constructor for Dog called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog( Dog const & rhs )
{
	std::cout << "Copy constructor for Dog called" << std::endl;
	this->type = rhs.type;
	this->brain = new Brain();
}

Dog & Dog::operator=(const Dog &rhs)
{
    this->type = rhs.type;
	this->brain = new Brain();
    return (*this);
}

Dog::~Dog( void )
{
	std::cout << "Destructor for Dog called" << std::endl;
	delete this->brain;
}

void	Dog::makeSound( void ) const
{
	std::cout << "BARK!" << std::endl;
}