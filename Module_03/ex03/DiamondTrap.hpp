/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:05:06 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/22 20:13:50 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string name;
        DiamondTrap();
    public:
        
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &rhs);
        DiamondTrap &operator=(const DiamondTrap &rhs);
        void whoAmI();
        ~DiamondTrap(); 
};
