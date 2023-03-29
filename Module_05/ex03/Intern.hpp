#include "Form.hpp"

class Intern
{
    private :
        Form *forms[3];
    public : 
        Form *makeForm(std::string name, std::string target);
        Intern();
        Intern(const Intern &rhs);
        Intern & operator=(const Intern &rhs);
		~Intern();
        class FormException : public std::exception
        {
            public :
                const char * what() const throw()
				{
                   return ("Form does not exist");
                };
        };
};
