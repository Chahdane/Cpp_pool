#include <iostream>
#include <stack>
#include <cctype>
#include "RPN.hpp"



int main(int ac, char **av) {
	// if (ac != 2)
	// 	return 1;
	(void)ac;
	std::string out;
	std::string a = av[1];
	 for (size_t i = 0; i < a.length(); i++) {
        if (a[i] != ' ') {
            out += a[i];
        }
    }
	RPN n(out);
	n.calculate();
    return 0;
}





