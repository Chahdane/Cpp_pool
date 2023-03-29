
#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "Default constructor for Cat called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat( Cat const & rhs )
{
	std::cout << "Copy constructor for Cat called" << std::endl;
	this->type = rhs.type;
	this->brain = new Brain();
}

Cat & Cat::operator=(const Cat &rhs)
{
    this->type = rhs.type;
	this->brain = new Brain();
    return (*this);
}

Cat::~Cat( void )
{
	std::cout << "Destructor for Cat called" << std::endl;
	delete this->brain;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meeeow!"<< std::endl;
}
