/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:00:26 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/21 20:06:35 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP


#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    protected:
        std::string name;
    public:
        ScavTrap();
        void attack(const std::string& target);
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &rhs);
        ScavTrap &operator=(const ScavTrap &rhs);
        void guardGate();
        ~ScavTrap();
};

#endif