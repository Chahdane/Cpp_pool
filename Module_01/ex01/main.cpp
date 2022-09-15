/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:13:25 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/15 16:34:00 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;
    std::string name = "foo ";

    Zombie *zmbs;

    zmbs = zombieHorde(N,name);
    for (int i = 0; i < N; i++)
        zmbs[i].announce();
    delete[] zmbs;
}