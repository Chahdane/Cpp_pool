#include "ClapTrap.hpp"

int main() {

    ClapTrap x;
    ClapTrap a("TRAP 1");
    ClapTrap b;
    b.getStats();
    b = a;
    a.takeDamage(1); 
    a.takeDamage(5);
    a.beRepaired(6);
    a.attack("TARGET 2");
    a.takeDamage(5);
    a.takeDamage(5);
    a.attack("TARGET 3");
    a.beRepaired(10);
    a.attack("TARGET 4");
    a.beRepaired(1);
    a.attack("TARGET 5");
    a.beRepaired(1);
    a.beRepaired(2);
    a.beRepaired(4);
    a.beRepaired(2);
    a.getStats();
    a.attack("TARGET 6");
    a.beRepaired(2);
    return 0;
}