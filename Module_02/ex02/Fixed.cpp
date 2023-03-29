#include "Fixed.hpp"
#include <cmath>
#include <cstddef>

Fixed::Fixed()
{
    //std::cout << "Default constructor called" << std::endl;
    number = 0;
}

Fixed::Fixed(const int number)
{
   // std::cout << "Int constructor called" << std::endl;
    this->number = number<<bits;
}

Fixed::Fixed(const float number)
{
    //std::cout << "Float constructor called" << std::endl;
    this->number = roundf(number * (1 << bits));
}


Fixed::Fixed(const Fixed& rhs)
{
    *this = rhs;
    //std::cout << "Copy constructor called" << std::endl;
}

//  OPERATIONS: 

Fixed& Fixed::operator=(const Fixed& rhs)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    number = rhs.number;
    return *this;
}

Fixed Fixed::operator+(const Fixed& rhs)
{
    number = number + rhs.number;
    return (*this);
}

Fixed Fixed::operator-(const Fixed& rhs)
{
    number = number - rhs.number;
    return (*this);
}

Fixed Fixed::operator*(const Fixed& rhs)
{
    number = (number * rhs.number)>>bits;
	return (*this);
}

Fixed Fixed::operator/(const Fixed& rhs)
{
    number = (number / rhs.number)<<bits;
    return (*this);
}

bool Fixed::operator==(const Fixed& rhs)
{
    if (number == rhs.number) return true;
    return false;
}

bool Fixed::operator!=(const Fixed& rhs)
{
    if (number == rhs.number) return false;
    return true;
}

bool Fixed::operator>(const Fixed& rhs) const
{
    if (number > rhs.number) return true;
    return false;
}

bool Fixed::operator>=(const Fixed& rhs)
{
    if (number >= rhs.number) return true;
    return false;
}

bool Fixed::operator<(const Fixed& rhs) const
{
    if (number < rhs.number) return true;
    return false;
}


bool Fixed::operator<=(const Fixed& rhs)
{
    if (number <= rhs.number) return true;
    return false;
}

// INCREMENT/DECREMENT

Fixed Fixed::operator++()
{
	Fixed tmp;
	tmp.number = ++number;
	return (tmp);
}

Fixed Fixed::operator--()
{
	Fixed tmp;
	tmp.number = --number;
	return (tmp);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp;
	tmp.number = number++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp;
	tmp.number = number--;
	return (tmp);
}

// MIN/MAX

Fixed& Fixed::min(Fixed& a, Fixed&b)
{
    if (a < b) return a;
    return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed &b)
{
    if (a < b) return a;
    return b;
}

Fixed& Fixed::max(Fixed& a, Fixed&b)
{
    
    if (a > b) return a;
    return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed &b)
{
    if (a > b) return a;
    return b;
}


Fixed::~Fixed()
{
   // std::cout << "Destructor called" << std::endl;
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