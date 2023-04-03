#include "PmergeMe.hpp"

bool isNumeric(std::string str) {
    for (unsigned int i = 0; i < str.length(); i++) {
        if (!isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

int main(int ac, char **av) {


	PmergeMe a;
	for (int i = 1; i < ac; i++)
	{
		if(isNumeric(av[i]))
			a.add(std::stoi(av[i]));
		else
			return 0;
	}
	a.sort_vec();
	a.sort_deq();
	

    return 0;
}

