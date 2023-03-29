#include <iostream>

#include "Bureaucrat.hpp"

int main()
{
    try 
    {
        Bureacrat a("test", -1);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}