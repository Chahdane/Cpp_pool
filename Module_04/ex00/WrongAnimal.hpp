#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &rhs);
		~WrongAnimal(void);
		WrongAnimal	&operator=(const WrongAnimal &rhs);
		void	makeSound(void) const ;
		const std::string	&getType(void) const ;
};

#endif
