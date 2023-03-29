
#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Cat: public Animal
{
	private:
		Brain *brain;
	public:
		Cat(void);
		Cat(const Cat &rhs);
		~Cat(void);
		Cat &operator=(const Cat &rhs);
		virtual void	makeSound(void) const ;
};
#endif
