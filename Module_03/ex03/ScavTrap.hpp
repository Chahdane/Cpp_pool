#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP


#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    protected:
        std::string name;
    public:
        ScavTrap();
        void attack(const std::string& target);
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &rhs);
        ScavTrap &operator=(const ScavTrap &rhs);
        void guardGate();
        ~ScavTrap();
};

#endif