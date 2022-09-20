/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:38:42 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/20 17:52:07 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;

}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << name << "attacks " << target << " causing " << attackDamage << " points of damage" <<  std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hitPoints -= amount;
    energyPoints--;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    hitPoints += amount;
    energyPoints--;
}


std::string ClapTrap::getName()
{
    return name;
}

void ClapTrap::getStats()
{
    std::string tmp;

    tmp =  "[ " + name + " ]";
    std::cout << std::endl;
    std::cout << "Stats for: " << tmp << std::endl;
    std::cout << "Hit Points: " << hitPoints << std::endl;
    std::cout << "Energy Points: " << energyPoints << std::endl;
    std::cout << "Attack Damage: " << attackDamage << std::endl;
}

ClapTrap::~ClapTrap()
{
}