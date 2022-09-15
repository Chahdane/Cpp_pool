/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:52:34 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/15 15:19:36 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    // Dynamically creating a zombie
    Zombie *a = newZombie("Zombie 1");
    a->announce();
    delete a;

    // Creating a zombie in a fnc scoop
    randomChump("Zombie 2");
}