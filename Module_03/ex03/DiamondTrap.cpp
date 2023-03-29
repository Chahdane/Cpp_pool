#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "Default constructor for DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
    this->name = name ;
    ClapTrap::name = name + "_clap_name";
    hitPoints = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    attackDamage = FragTrap::attackDamage;
    std::cout << "named constructor for DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &rhs)
{
    std::cout << "DiamondTrap : copy constructor"<< std::endl;
    *this = rhs;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
    name = rhs.name;
    hitPoints = rhs.hitPoints;
    energyPoints = rhs.energyPoints;
    attackDamage = rhs.attackDamage;
    std::cout << "DiamondTrap : copy assignment operatot called"<< std::endl;
    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "hello my name is "<< name << " and my base class name is "<< ClapTrap::name << std::endl;
}


DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}