#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{	
	std::cout << "Default constructor for WrongAnimal called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal( WrongAnimal const & rhs )
{
	std::cout << "Copy constructor for WrongAnimal called" << std::endl;
	*this = rhs;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "Destructor for WrongAnimal called" << std::endl;
}

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << "Assignement operator for WrongAnimal called" << std::endl;
	this->type = rhs.getType();
	return *this;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal Sound " << std::endl;
}

const std::string	&WrongAnimal::getType( void ) const
{
	return (this->type);
}

