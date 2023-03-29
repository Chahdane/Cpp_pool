#include "Form.hpp"
#include <iostream>


Form::Form(std::string name, int sign_g, int execute_g, std::string target) : name(name), grade_to_sign(sign_g), grade_to_execute(execute_g), target(target)
{
    std::cout << "Constructor for Form called."<<std::endl;
    if (grade_to_execute < 1 || grade_to_sign < 1)
        throw GradeTooHighException();
    else if (grade_to_execute > 150 || grade_to_sign > 150)
        throw GradeTooLowException();
    this->is_signed = false;
}

Form::Form(void) : name("Form"), grade_to_sign(0), grade_to_execute(0), target("aa")
{
    is_signed = false;
}

Form::Form(const Form &rhs) : name(rhs.name), grade_to_sign(rhs.grade_to_sign), grade_to_execute(rhs.grade_to_execute)
{
    std::cout << "Copy Constructor for Form called."<<std::endl;
	this->is_signed = rhs.is_signed;
}

Form & Form::operator=(const Form &rhs)
{
    std::cout << "Copy Assignment Operator for Form called."<<std::endl;
    this->is_signed = rhs.is_signed;
    return (*this);
}

std::string Form::get_name() const
{
    return (name);
}

bool Form::signature_status() const
{
    return (is_signed);
}

int Form::get_grade_to_sign() const
{
    return (grade_to_sign);
}

int Form::get_grade_to_execute() const
{
    return (grade_to_execute);
}

std::string Form::get_target() const
{
    return (this->target);
}

void Form::beSigned(Bureaucrat &Bureaucrat)
{
    if (Bureaucrat.getGrade() <= this->get_grade_to_sign())
    {
        if (this->is_signed == true)
        {
            std::cout << "Form already signed" << std::endl;
            return ;
        }
        std::cout << name << " got signed by: " << Bureaucrat.getName() << std::endl;
        this->is_signed = true;
    }
    else
        throw GradeTooLowException();
}

Form::~Form(void)
{
    std::cout << "Destructor for Form called" << std::endl;
}


std::ostream & operator<<(std::ostream &out, Form &form)
{
    out << "   === Form info === " << std::endl;
    out << "name :           : " << form.get_name() << std::endl;
    out << "grade_to_sign    : " << form.get_grade_to_sign() << std::endl;
    out << "grade_to_execute : " << form.get_grade_to_execute() << std::endl;
    return (out);
}