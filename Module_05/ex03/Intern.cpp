#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Form *Intern::makeForm(const std::string name, const std::string target)
{
    forms[0] = new ShrubberyCreationForm(target);
	forms[1] = new RobotomyRequestForm(target);
	forms[2] = new PresidentialPardonForm(target);
	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i]->get_name())
			return (forms[i]);
	}
	throw FormException();
}

Intern::Intern()
{

}

Intern::~Intern()
{

}

Intern::Intern(const Intern &rhs)
{
	*this = rhs;
}

Intern & Intern::operator=(const Intern &rhs)
{
	for (int i = 0; i < 3; i++)
	{
		this->forms[i] = rhs.forms[i];
	}
	return (*this);
}