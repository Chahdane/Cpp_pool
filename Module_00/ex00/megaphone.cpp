#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1) std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	for (int i = 1; i < ac; i++)
	{
		std::string tmp;
		tmp = av[i];
		for (int j = 0; j < (int)tmp.length() ; j++)
			std::cout << (char)toupper(tmp[j]);
		if (!av[i + 1]) std::cout << std::endl;
	}
	return (0);
}