#include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << "Default constructor for Animal called" << std::endl;
	this->type = "Random Animal";
}

Animal::Animal( Animal const & rhs )
{
	std::cout << "Copy constructor for Animal called" << std::endl;
	*this = rhs;
}

Animal::~Animal( void )
{
	std::cout << "Destructor for Animal called" << std::endl;
}

Animal&	Animal::operator=( Animal const & rhs )
{
	std::cout << "Assignement operator for Animal called" << std::endl;
	this->type = rhs.getType();
	return *this;
}

void	Animal::makeSound( void ) const
{
	std::cout << "ANIMAL NOISES" << std::endl;
}

const std::string	&Animal::getType( void ) const
{
	return (this->type);
}
	