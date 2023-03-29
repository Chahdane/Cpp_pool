#ifndef SHRUBBERYCREATIONFORM
#define SHRUBBERYCREATIONFORM
#include "Form.hpp"
#include "exception"
class Form;

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm();
        void execute(Bureaucrat & executor) const;
        ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
};

#endif