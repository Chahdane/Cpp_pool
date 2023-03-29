#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    name = "Unknown ScavTrap";
    hitPoints += 90;
    energyPoints += 40;
    attackDamage += 20;
    std::cout << name << " Created by Default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    hitPoints += 90;
    energyPoints += 40;
    attackDamage += 20;
    std::cout << name << " Created by derived class constructor (ScavTrap)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& rhs)
{
    std::cout << "copy constructor called for ScavTrap" << std::endl;
    *this = rhs;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs)
{
    name = rhs.name;
    hitPoints = rhs.hitPoints;
    energyPoints = rhs.energyPoints;
    attackDamage = rhs.attackDamage;
    std::cout << "Copy Assignment operator called for ScavTrap"<< std::endl;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Default desstructor for ScavTrap " << name << " called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
     if (!energyPoints || !hitPoints)
    {
        std::cout << name << " Can't attack [please repaire] "<< std::endl;
        return ;
    }
    std::cout << "ScavTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage" <<  std::endl;
    energyPoints--;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}