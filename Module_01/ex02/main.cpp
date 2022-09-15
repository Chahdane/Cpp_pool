/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:36:32 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/15 16:48:00 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN" ;
    std::string *stringPTR = &str;
    std::string &stringREF = str; 

    std::cout << "ADRESSES: " << std::endl;

    std::cout << "Initial string: " << &str <<std::endl;
    std::cout << "stringPTR:      " << stringPTR <<std::endl;
    std::cout << "IstringREF:     " << &stringREF <<std::endl;

    std::cout << "VALUES: " << std::endl;

    std::cout << "Initial string: " << str <<std::endl;
    std::cout << "stringPTR:      " << *stringPTR <<std::endl;
    std::cout << "IstringREF:     " << stringREF <<std::endl;

}
