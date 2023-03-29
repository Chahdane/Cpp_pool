#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class Form;

class RobotomyRequestForm : public Form
{
    public:
    void execute(Bureaucrat & executor) const;
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const Bureaucrat &rhs);
    ~RobotomyRequestForm();
};

#endif