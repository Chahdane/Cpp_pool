#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *animal[10];

    int i = 0;
    while(i < 10)
    {
        if (i % 2 == 0)
            animal[i] = new Cat();
        else
            animal[i] = new Dog();
        animal[i]->makeSound();
        i++;
    }
    i = 0;
    while(i < 10)
    { 
        delete animal[i];
        i++;
    }
	//system("leaks brain");
    return 0;
}