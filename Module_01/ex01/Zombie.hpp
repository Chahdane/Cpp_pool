#include <iostream>

class  Zombie
{
    private:
        std::string name;
    public:
        void announce( void );
        void set_Name(std::string name);
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );
