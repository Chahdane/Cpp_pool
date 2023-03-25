/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:00:22 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/22 20:24:14 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    name = "Unknown";
    energyPoints = 50;
    std::cout << name <<" ScavTrap Created by Default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    energyPoints = 50;
    std::cout << name << " Created by derived class constructor (ScavTrap)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& rhs)
{
    std::cout << "copy constructor called for ScavTrap" << std::endl;
    *this = rhs;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs)
{
    name = rhs.name;
    hitPoints = rhs.hitPoints;
    energyPoints = rhs.energyPoints;
    attackDamage = rhs.attackDamage;
    std::cout << "Copy Assignment operator called for ScavTrap" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Default desstructor for ScavTrap called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
     if (!energyPoints || !hitPoints)
    {
        std::cout << name << " Can't attack [please repaire] "<< std::endl;
        return ;
    }
    std::cout << "(ScavTrap) attacks " << target << " causing " << attackDamage << " points of damage" <<  std::endl;
    energyPoints--;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}