#include "ABC.hpp"
#include <unistd.h>

int	main( )
{
	Base * d1;
	Base * d2;

	d1 = generate();
	sleep(1);
	d2 = generate();

	std::cout << "Identify by REF:" << std::endl;
	identify(d1);
	identify(d2);
	std::cout << "Identify by PTR:" << std::endl;
	identify(*d1);
	identify(*d2);
	delete d1;
	delete d2;
}