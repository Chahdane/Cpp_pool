#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request", 72, 45, target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void RobotomyRequestForm::execute(Bureaucrat & executor) const
{
    if (this->signature_status() == false)
        throw not_signed();
    else if (executor.getGrade() > 45)
        throw GradeTooLowException();
    else
    {
        std::cout << get_target() << " has been robotomized successfully 50% of the time.";
        std::cout << std::endl;
    }
}

RobotomyRequestForm::RobotomyRequestForm(const Bureaucrat &rhs)
{
    *this = rhs;
}
