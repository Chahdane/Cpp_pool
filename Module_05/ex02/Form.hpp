#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private :
        const std::string name;
        bool is_signed;
        const int grade_to_sign;
        const int grade_to_execute;
		std::string target;
    public :
        Form();
        Form(std::string name, int sign, int exec, std::string target);
        Form(const Form &rhs);
        Form & operator=(const Form &rhs);
		~Form();
        std::string get_name() const;
        bool signature_status() const;
        int	get_grade_to_sign() const;
        int	get_grade_to_execute() const;
        void beSigned(Bureaucrat &Bureaucrat);
		void set_target(std::string target);
		std::string get_target(void) const;
		virtual void execute(Bureaucrat & executor) const = 0;
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
		class not_signed : public std::exception
        {
            public :
                const char * what() const throw(){
                   return ("form not signed");
                };
        };
};

std::ostream & operator<<( std::ostream &out,  Form &c);
#endif