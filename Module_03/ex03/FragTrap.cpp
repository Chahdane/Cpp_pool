#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    name = "Unknown FragTrap";
    hitPoints = 100;
    attackDamage = 30;
    std::cout << name << " Created by Default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    hitPoints = 100;
    attackDamage = 30;
    std::cout << name << " Created by derived class constructor (FragTrap)" << std::endl;
}

FragTrap::FragTrap(const FragTrap& rhs)
{
    std::cout << "copy constructor called for FragTrap" << std::endl;
    *this = rhs;
}

FragTrap& FragTrap::operator=(const FragTrap &rhs)
{
    name = rhs.name;
    hitPoints = rhs.hitPoints;
    energyPoints = rhs.energyPoints;
    attackDamage = rhs.attackDamage;
    std::cout << "Copy Assignment operator called for FragTrap" << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "Default desstructor for FragTrap called" << std::endl;
}

void FragTrap::guardGate()
{
    std::cout << "FragTrap is now in Gate keeper mode" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "HI FIFE FROM " << name  << std::endl;
}