#include <iostream>

class Bureacrat
{
	private:
        const std::string name;
        int grade;
    public:
		Bureacrat();
        Bureacrat(std::string name, int grade);
		Bureacrat(const Bureacrat &rhs);
        Bureacrat &operator=(const Bureacrat &rhs);
		~Bureacrat();
        std::string getName();
        int         getGrade();
        void        increment_grade();
        void        decrement_grade();
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
std::ostream & operator<<(std::ostream &out,  Bureacrat &bureacrat);

