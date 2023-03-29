#include "Harl.hpp"
#include <algorithm>
#include<iostream>

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free."<<std::endl;
    std::cout <<  "I’ve been coming foryears whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}

void Harl::complain(std::string level)
{
    void(Harl::*fun_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    int i = 0;

    while (level != levels[i] && i < 4)
        i++;
    switch (i)
    {
        case 0:
            std::cout<<"[ DEBUG ]"<<std::endl;
            (this->*fun_ptr[i])();
            break;
        case 1:
            std::cout<<"[ INFO ]"<<std::endl;
            (this->*fun_ptr[i])();
            break;
        case 2:
            std::cout<<"[ WARNING ]"<<std::endl;
            (this->*fun_ptr[i])();
            break;
        case 3:
            std::cout<<"[ ERROR ]"<<std::endl;
            (this->*fun_ptr[i])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}