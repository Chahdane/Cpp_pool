#include <fstream>
#include <iostream>
#include "Replace.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Error : Wrong number of args" << std::endl;
        return (1);
    }
    Replace rep(av[1], av[2], av[3]);
    if (!rep.check_errors())
        return (1);
    rep.copy_and_replace();
}
