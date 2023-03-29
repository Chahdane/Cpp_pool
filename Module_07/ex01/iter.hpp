#include <iostream>

template <typename T> void print(T &t)
{
    std::cout << t << std::endl;
}

template <typename T> void add_one(T &t)
{
	t++;
}

template <typename T> void iter(T *arr, int len, void (*func)(T&))
{
	for (int i = 0 ; i < len ; i ++)
		func(arr[i]);
}