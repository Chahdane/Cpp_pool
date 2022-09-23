/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:00:22 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/22 21:59:32 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    name = "Unknown FragTrap";
    hitPoints += 90;
    energyPoints += 90;
    attackDamage += 30;
    std::cout << name << " Created by Default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    hitPoints += 90;
    energyPoints += 90;
    attackDamage += 30;
    std::cout << name << " Created by derived class constructor (FragTrap)" << std::endl;
}

FragTrap::FragTrap(const FragTrap& rhs)
{
    std::cout << "copy constructor called for FragTrap" << std::endl;
    *this = rhs;
}

FragTrap& FragTrap::operator=(const FragTrap &rhs)
{
    name = rhs.name;
    hitPoints = rhs.hitPoints;
    energyPoints = rhs.energyPoints;
    attackDamage = rhs.attackDamage;
    std::cout << "Copy Assignment operator called for FragTrap" << name << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "Default desstructor for FragTrap " << name << " called" << std::endl;
}


void FragTrap::guardGate()
{
    std::cout << "FragTrap is now in Gate keeper mode" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "HI FIFE FROM " << name  << std::endl;
}