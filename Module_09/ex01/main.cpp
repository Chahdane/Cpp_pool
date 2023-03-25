#include <iostream>
#include <stack>
#include <cctype>
#include "RPN.hpp"



int main(int ac, char **av) {


    
	RPN a(av[1]);

	a.calculate();
    
    return 0;
}





