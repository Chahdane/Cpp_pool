#include "ABC.hpp"

Base::~Base()
{

}

A::~A()
{

}

B::~B()
{

}

C::~C()
{

}

Base * generate(void)
{
    srand((unsigned int)time(NULL));
    int i =  rand() % 3;
    if (i == 0)
        return (new A);
    else if (i == 1)
        return (new B);
    return (new C);
}

void identify(Base* p)
{
	try
	{
		if (dynamic_cast<A*>(p))
        	std::cout << "Type : A" << std::endl;
		else
            throw std::bad_cast();
	}
	catch(const std::exception& e){
		//std::cout << e.what() << std::endl;
	}
	try
	{
		if (dynamic_cast<B*>(p))
        	std::cout << "Type : B" << std::endl;
		else
            throw std::bad_cast();
	}
	catch(const std::exception& e){
		//std::cout << e.what() << std::endl;
	}
	try
	{
		if (dynamic_cast<C*>(p))
       		std::cout << "Type : C" << std::endl;
		else
            throw std::bad_cast();
	}
	catch(const std::exception& e){
		//std::cout << e.what() << std::endl;
	}
}

void identify(Base& p)
{
   try
	{
		if (dynamic_cast<A *>(&p))
			std::cout << "Type : A" << std::endl;
        else
            throw std::bad_cast();
	}
	catch(const std::exception& e){
		//std::cout << e.what() << std::endl;
	}
    try
    {
        if (dynamic_cast<B *>(&p))
			std::cout << "Type : B" << std::endl;
        else
            throw std::bad_cast();
    }
    catch (const std::exception& e){
		//std::cout << e.what() << std::endl;
	}
    try 
    {
        if (dynamic_cast<C *>(&p))
			std::cout << "Type : C" << std::endl;
        else
            throw std::bad_cast();
    }
    catch (const std::exception& e){
		//std::cout << e.what() << std::endl;
	}
}