#ifndef C_FORM_HPP
#define C_FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureacrat;

class Form
{
    private :
        const std::string name;
        bool is_signed;
        const int grade_to_sign;
        const int grade_to_execute;
    public :
        Form();
        Form(std::string name, int sign, int exec);
        Form(const Form &rhs);
        Form & operator=(const Form &rhs);
		~Form();
        std::string get_name();
        bool signature_status();
        int	get_grade_to_sign();
        int	get_grade_to_execute();
        void beSigned(Bureacrat &bureacrat);
        class GradeTooHighException : public std::exception
        {
            public :
                const char * what() const throw()
                {
                    return "Grade Too High";
                };
        };

        class GradeTooLowException : public std::exception
        {
            public :
                const char * what() const throw(){
                   return ("Grade Too low");
                };
        };
};

std::ostream & operator<<( std::ostream &out,  Form &c);
#endif