#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void):name("unknown")
{
	std::cout << "Default Constructor for Bureaucrat called."<<std::endl;
	this->grade = 0;
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
    std::cout << "Constructor for Bureaucrat called."<<std::endl;
    if (grade > 150)
        throw GradeTooLowException();
	else if (grade < 1)
        throw GradeTooHighException();
    this->grade = grade;
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void    Bureaucrat::increment_grade()
{
    if (grade > 1)
        this->grade--;
    else
        throw GradeTooHighException();
}

void    Bureaucrat::decrement_grade()
{
    if (grade < 150)
        this->grade++;
    else
        throw  GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs) : name(rhs.name)
{
	std::cout << "Copy Constructor for Bureaucrat called."<<std::endl;
	this->grade = rhs.grade;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &rhs) 
{
	std::cout << "Copy Assignment Operator for Bureaucrat called."<<std::endl;
    this->grade = rhs.grade;
    return (*this); 
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor for Bureaucrat called." << std::endl;
}

void Bureaucrat::signForm(Form &form)
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


void Bureaucrat::executeForm(Form const &form)
{
    if (form.signature_status() == false)
        std::cout << "form not signed" << std::endl;
    else if (form.get_grade_to_execute() < this->grade)
        std::cout << "low grade to execute form" << std::endl;
    else
    {
        form.execute(*this);
        std::cout << this->name << " executed " << form.get_name() << std::endl;
    }
}

std::ostream & operator<<(std::ostream &out, Bureaucrat &Bureaucrat)
{
    out << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << ".";
    return (out);
}