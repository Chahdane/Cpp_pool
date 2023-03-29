#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal(Animal const & rhs);
		Animal	&operator=(const Animal &rhs);
		virtual void		makeSound(void) const = 0 ;
		const std::string	&getType(void) const ;
};
#endif