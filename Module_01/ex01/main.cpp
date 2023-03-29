#include "Zombie.hpp"

int main()
{
    int N = 5;
    std::string name = "foo ";

    Zombie *zmbs;

    zmbs = zombieHorde(N,name);
    for (int i = 0; i < N; i++)
        zmbs[i].announce();
    delete[] zmbs;
}