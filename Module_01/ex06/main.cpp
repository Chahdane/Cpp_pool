#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2) return 0;
    Harl harl;

    harl.complain(av[1]);
}
