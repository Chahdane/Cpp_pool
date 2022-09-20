/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:38:37 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/20 17:51:57 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {

    ClapTrap a(" A ");
    ClapTrap b(" B ");
     a.getStats();
    a.attack("b");
    a.takeDamage(5);
    a.getStats();
    a.takeDamage(5);
    a.getStats();
    a.takeDamage(5);
    a.getStats();
    return 0;
}