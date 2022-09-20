/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:38:37 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/20 22:29:46 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {

    ClapTrap a("TRAP 1");
    ClapTrap b;
    b = a;
    b.setNmae("Trap 2");
    a.takeDamage(1); 
    a.takeDamage(5);
    a.beRepaired(6);
    a.attack("TARGET 2");
    a.takeDamage(5);
    a.takeDamage(5);
    a.attack("TARGET 3");
    a.beRepaired(10);
    a.attack("TARGET 4");
    a.beRepaired(1);
    a.attack("TARGET 5");
    a.beRepaired(1);
    a.beRepaired(2);
    a.beRepaired(4);
    a.beRepaired(2);
    a.getStats();
    a.attack("TARGET 6");
    a.beRepaired(2);
    return 0;
}