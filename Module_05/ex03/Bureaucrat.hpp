#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
        const std::string name;
        int grade;
    public:
		Bureaucrat();
        Bureaucrat(std::string name, int grade);
        std::string getName() const;
        int         getGrade() const;
        void        increment_grade();
        void        decrement_grade();
        Bureaucrat(const Bureaucrat &rhs);
        Bureaucrat &operator=(const Bureaucrat &rhs);
		~Bureaucrat();
		void signForm(Form &form);
		void executeForm(Form const & form);
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
                const char * what() const throw()
                {
                    return ("Grade Too low");
                };
        };
};
std::ostream & operator<<(std::ostream &out,  Bureaucrat &Bureaucrat);

#endif