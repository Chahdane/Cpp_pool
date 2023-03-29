
#include "Convert.hpp"

int main(int ac, char ** av){

	if (ac != 2)
		return 0;
	Convert c(av[1]);

	c.convert();
}