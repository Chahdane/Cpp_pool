/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:38:37 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/21 20:16:36 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

int main() {

    DiamondTrap a("hello");
    a.getStats();
    a.attack("tar");
    a.whoAmI();
    return 0;
}