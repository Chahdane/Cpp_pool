#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern		intern;
	Bureaucrat	bur("BUR", 15);
	Form		*form;
    try {
        //form = intern.makeForm("not working", "TEST 1");
        //form = intern.makeForm("presidential pardon", "TEST 2");
        form = intern.makeForm("shrubbery creation", "TEST 3");
        //form = intern.makeForm("robotomy request", "TEST 4");
        form->beSigned(bur);
        form->execute(bur);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}