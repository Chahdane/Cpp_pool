#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "Default constructor for Dog called" << std::endl;
	this->type = "Dog";
}

Dog::Dog( Dog const & rhs )
{
	std::cout << "Copy constructor for Dog called" << std::endl;
	*this = rhs;
}

Dog::~Dog( void )
{
	std::cout << "Destructor for Dog called" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "BARK!" << std::endl;
}