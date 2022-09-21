/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:00:22 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/21 18:50:38 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    name = "Unknown FragTrap";
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << name << " Created by Default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << name << " Created by derived class constructor (FragTrap)" << std::endl;
}

FragTrap::FragTrap(const FragTrap& rhs)
{
    *this = rhs;
}

FragTrap& FragTrap::operator=(const FragTrap &rhs)
{
    name = rhs.name;
    hitPoints = rhs.hitPoints;
    energyPoints = rhs.energyPoints;
    attackDamage = rhs.attackDamage;
    std::cout << "FragTrap [ " << name << " ] Created by a copy constructor" << std::endl;
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