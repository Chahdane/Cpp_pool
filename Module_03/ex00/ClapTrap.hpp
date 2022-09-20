/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:38:39 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/20 17:45:47 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
	private:
		std::string     name;
		unsigned int    hitPoints;
		unsigned int   	energyPoints ;
		unsigned int	attackDamage;
	public:
		//ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& rhs);
		//ClapTrap &operator=(const ClapTrap &);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName();
		void getStats();
		~ClapTrap();
};
