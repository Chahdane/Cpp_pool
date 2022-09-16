/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:13:16 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/15 23:02:56 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return (nullptr);
	Zombie *zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombies[i].set_Name(name);
	return zombies;
}
