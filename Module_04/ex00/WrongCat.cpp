#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	std::cout << "Default constructor for WrongCat called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat( WrongCat const & rhs )
{
	std::cout << "Copy constructor for WrongCat called" << std::endl;
	*this = rhs;
}

WrongCat::~WrongCat( void )
{
	std::cout << "Destructor for WrongCat called" << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Wrong Meeeow!" << std::endl;
}
