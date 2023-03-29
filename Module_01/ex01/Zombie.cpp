#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_Name(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << name << " died [RIP] "<< std::endl;
}