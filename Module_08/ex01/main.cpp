#include "Span.hpp"

int main()
{
	try 
	{
		Span sp(100000);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(111);
		sp.addNumbers(132,92000);
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (char const *str)
	{
		std::cout << "error " << str << std::endl;
	}

}