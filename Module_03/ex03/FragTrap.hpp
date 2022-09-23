/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:36:40 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/22 20:11:47 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    private:

    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &rhs);
        FragTrap &operator=(const FragTrap &rhs);
        void guardGate();
        void highFivesGuys(void);
        ~FragTrap();
};

