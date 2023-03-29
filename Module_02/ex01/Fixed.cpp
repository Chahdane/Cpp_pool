#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    number = 0;
}

Fixed::Fixed(const int number)
{
    std::cout << "Int constructor called" << std::endl;
    this->number = number<<bits;
}

Fixed::Fixed(const float number)
{
    std::cout << "Float constructor called" << std::endl;
    this->number = roundf(number * (1 << bits));
}


Fixed::Fixed(const Fixed& rhs)
{
    *this = rhs;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    number = rhs.number;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
    return  this->number / (float)(1 << bits);
}

int Fixed::toInt( void ) const
{
    return this->number>>bits;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fp)
{
    out << fp.toFloat();
    return out;
}