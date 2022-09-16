/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:20:50 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/16 18:40:50 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include "Replace.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Error : Wrong number of args" << std::endl;
        return (1);
    }
    Replace rep(av[1], av[2], av[3]);
    if (!rep.check_errors())
        return (1);
    rep.copy_and_replace();
}
