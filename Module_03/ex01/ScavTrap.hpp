/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:00:26 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/21 16:10:46 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:

    public:
        ScavTrap();
        void attack(const std::string& target);
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &rhs);
        ScavTrap &operator=(const ScavTrap &rhs);
        void guardGate();
        ~ScavTrap();
};
