#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try 
    {
		Bureacrat b("one", 4);
        b.decrement_grade();
		Form form("form", 12, 12);
		std::cout << b << std::endl;
		std::cout << form << std::endl;
        //
        std::cout << form.signature_status()<< std::endl;
        form.beSigned(b);
       form.beSigned(b);
        std::cout << form.signature_status()<< std::endl;
        // a.increment_grade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}