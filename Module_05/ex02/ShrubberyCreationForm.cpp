#include "ShrubberyCreationForm.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery creation", 145, 137, target)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm()
{

}

void ShrubberyCreationForm::execute(Bureaucrat & executor) const
{
	if (executor.getGrade() > 137)
		throw not_signed();
	else
	{
		std::ofstream of(get_target());
		std::string tree = "                      .					\
                                              .         ;  		\n	\
                 .              .              ;%     ;;   		\n	\
                   ,           ,                :;%  %;   		\n	\
                    :         ;                   :;%;'     .,  \n	\
                     %;     %;            ;        %;'    ,;	\n	\
                     ;%;  %%;        ,     %;    ;%;    ,%'		\n	\
                       %;%;      ,  ;       %;  ;%;   ,%;' 		\n	\
                        %;        ;%;        % ;%;  ,%;'		\n	\
                         ;%;     %;'         `;%%;.%;'			\n	\
                           %@;             %; ;@%;%'				\n	\
                           :;bd%;         %;@%;'				\n	\
                             :;%.        ;@@%;'   				\n	\
                              %@bd%%%bd%%:;     				\n	\
                                #@%%%%%:;;						\n	\
                                %@@%%%::;						\n	\
                          ...;%@@@@@%%:;;;;,..\n";
		of <<tree;
		of.close();
	}
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs)
{
	*this = rhs;
}
