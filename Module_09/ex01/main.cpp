#include <iostream>
#include <stack>
#include <cctype>
#include "RPN.hpp"



int main(int ac, char **av) {
	// if (ac != 2)
	// 	return 1;
	(void)ac;
	RPN a(av[1]);
	a.calculate();
    return 0;
}





