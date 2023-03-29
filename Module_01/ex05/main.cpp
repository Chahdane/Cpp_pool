#include "Harl.hpp"

int main()
{
    Harl harl;
    // VALID :
    harl.complain("ERROR");
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");

    // UNVALID 

    harl.complain("");
    harl.complain("abcd");
    harl.complain("hello");
}
