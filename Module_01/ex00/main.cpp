#include "Zombie.hpp"

int main()
{
    // Dynamically creating a zombie
    Zombie *a = newZombie("Zombie 1");
    a->announce();
    delete a;

    // Creating a zombie in a fnc scoop
    randomChump("Zombie 2");
}