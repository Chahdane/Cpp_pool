#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try 
    {
        ShrubberyCreationForm b("home");
        Bureaucrat e("low", 130);
        b.execute(e);
        b.beSigned(e);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}