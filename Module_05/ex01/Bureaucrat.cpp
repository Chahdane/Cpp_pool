#include "Bureaucrat.hpp"

Bureacrat::Bureacrat(void):name("unknown")
{
	std::cout << "Default Constructor for Bureacrat called."<<std::endl;
	this->grade = 0;
}

Bureacrat::Bureacrat(std::string name, int grade): name(name)
{
    std::cout << "Constructor for Bureacrat called."<<std::endl;
    if (grade > 150)
        throw GradeTooLowException();
	else if (grade < 1)
        throw GradeTooHighException();
    this->grade = grade;
}

std::string Bureacrat::getName()
{
    return (this->name);
}

int Bureacrat::getGrade()
{
    return (this->grade);
}

void    Bureacrat::increment_grade()
{
    if (grade > 1)
        this->grade--;
    else
        throw GradeTooHighException();
}

void    Bureacrat::decrement_grade()
{
    if (grade < 150)
        this->grade++;
    else
        throw  GradeTooLowException();
}

Bureacrat::Bureacrat(const Bureacrat &rhs) : name(rhs.name)
{
	std::cout << "Copy Constructor for Bureacrat called."<<std::endl;
	this->grade = rhs.grade;
}

Bureacrat & Bureacrat::operator=(const Bureacrat &rhs) 
{
	std::cout << "Copy Assignment Operator for Bureacrat called."<<std::endl;
    this->grade = rhs.grade;
    return (*this); 
}

Bureacrat::~Bureacrat()
{
    std::cout << "Destructor for Bureacrat called." << std::endl;
}

void Bureacrat::signForm(Form &form)
{
    if (form.signature_status() == false && grade <= form.get_grade_to_sign())   
        form.beSigned(*this);
    else
    {
        std::cout << name << " couldn’t sign " << form.get_name() << " because: " ;
        if (grade > form.get_grade_to_sign())
            std::cout << "low grade." << std::endl;
        else
            std::cout << "Form already signed."<< std::endl;
    }
}

std::ostream & operator<<(std::ostream &out, Bureacrat &bureacrat)
{
    out << bureacrat.getName() << ", bureaucrat grade " << bureacrat.getGrade() << ".";
    return (out);
}