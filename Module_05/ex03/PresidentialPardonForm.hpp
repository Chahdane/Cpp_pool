#ifndef PRESIDENTIALPARDONFOR_HPP
#define PRESIDENTIALPARDONFOR_HPP
#include "Form.hpp"
class Form;

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        void execute(Bureaucrat & executor) const;
        PresidentialPardonForm(const PresidentialPardonForm &rhs);  
};

#endif