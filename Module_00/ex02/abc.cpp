#include <iostream>

class Abc{
    private :
        static int _aa;
};

int Abc::_aa = 0;
int main()
{
    Abc a;
    std::cout<< a._aa <<std::endl;
}