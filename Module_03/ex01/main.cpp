#include "ScavTrap.hpp"

int main() {

    ScavTrap a("BOOOO");
    a.getStats();
    a.takeDamage(10); 
    a.takeDamage(50);
    a.beRepaired(5);
    a.attack("TARGET 1");
    a.attack("TARGET 2");
    a.takeDamage(5);
    a.takeDamage(5);
    a.attack("TARGET 3");
    a.beRepaired(5);
    a.getStats();
    for (int i = 0; i < 45; i++)
        a.attack("RANDOM TARGET");
    a.getStats();
    a.attack("TARGET 4");
    a.guardGate();
    return 0;
}