
#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "Default constructor for Cat called" << std::endl;
	this->type = "Cat";
}

Cat::Cat( Cat const & rhs )
{
	std::cout << "Copy constructor for Cat called" << std::endl;
	*this = rhs;
}

Cat::~Cat( void )
{
	std::cout << "Destructor for Cat called" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meeeow!"<< std::endl;
}
