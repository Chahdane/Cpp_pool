#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main()
{
    try
    {
        std::vector<int> vec;
        for(int i = 0; i < 10; i++){
            vec.push_back(i);
        }
        std::vector<int>::iterator it = easyfind(vec, 9);
        std::cout << it - vec.begin() << std::endl;
    }
    catch (int i)
    {
        std::cout << "DOES NOT EXIST" << std::endl;
    }
}