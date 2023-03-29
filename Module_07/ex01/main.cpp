#include "iter.hpp"

int main()
{
    int ints[] = {1, 2, 3, 4};
	iter(ints, 3, add_one);
	iter(ints, 3, print);

	std::string str[] = {"hello", "hi", "test"};
    iter(str, 3, print);
}