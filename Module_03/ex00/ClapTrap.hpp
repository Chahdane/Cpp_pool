#include <iostream>

class ClapTrap
{
	private:
		std::string     name;
		unsigned int    hitPoints;
		unsigned int   	energyPoints ;
		unsigned int	attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& rhs);
		ClapTrap &operator=(const ClapTrap &rhs);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName();
		void getStats();
		~ClapTrap();
};

