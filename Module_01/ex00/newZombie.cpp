#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << name << " died [RIP] "<< std::endl;
}

Zombie* newZombie( std::string name )
{
    Zombie *ret = new Zombie(name);
    return ret;
}