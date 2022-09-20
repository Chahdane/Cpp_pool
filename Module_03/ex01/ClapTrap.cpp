/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:38:42 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/20 22:30:10 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Created" << std::endl;
}

void ClapTrap::setNmae(std::string name)
{
    this->name = name;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
    std::cout << name << " Created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& rhs)
{
    *this = rhs;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
    name = rhs.name;
    hitPoints = rhs.hitPoints;
    energyPoints = rhs.energyPoints;
    attackDamage = rhs.attackDamage;
    std::cout << "Created by a copy constructor" << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (!energyPoints || !hitPoints)
    {
        std::cout << name << " Can't attack [please repaire] "<< std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage" <<  std::endl;
    energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << name << " took " << amount << " of damage"<< std::endl;
    (amount >= hitPoints) ? hitPoints = 0 : hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!energyPoints)
    {
        std::cout << name << " Can't be repaired" << std::endl;
        return ;
    }
    hitPoints += amount;
    energyPoints--;
    std::cout << name << " Got repaired " << std::endl;
}


std::string ClapTrap::getName()
{
    return name;
}

void ClapTrap::getStats()
{
    std::string tmp;

    tmp =  "[ " + name + " ]";
    std::cout << "------------------------" << std::endl;
    std::cout << "  Stats for: " << tmp << std::endl;
    std::cout << "     .Hit Points: " << hitPoints << std::endl;
    std::cout << "     .Energy Points: " << energyPoints << std::endl;
    std::cout << "     .Attack Damage: " << attackDamage << std::endl;
    std::cout << "------------------------" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->name << " DIED "<<  std::endl;
}