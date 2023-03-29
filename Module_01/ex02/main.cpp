#include <algorithm>
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN" ;
    std::string *stringPTR = &str;
    std::string &stringREF = str; 

    std::cout << "ADRESSES: " << std::endl;

    std::cout << "Initial string: " << &str <<std::endl;
    std::cout << "stringPTR:      " << stringPTR <<std::endl;
    std::cout << "IstringREF:     " << &stringREF <<std::endl;

    std::cout << "VALUES: " << std::endl;

    std::cout << "Initial string: " << str <<std::endl;
    std::cout << "stringPTR:      " << *stringPTR <<std::endl;
    std::cout << "IstringREF:     " << stringREF <<std::endl;

}
