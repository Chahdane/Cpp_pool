/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:38:39 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/20 16:54:08 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
	private:
		std::string     name;
		unsigned int    hitPoints;
		unsigned int   	energyPoints;
		unsigned int	attackDamage;
	public:
		void sayHi(){
			std::cout << "HI" << name << std::endl;
		}
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& rhs);
		//ClapTrap &operator=(const ClapTrap &);
		// void attack(const std::string& target);
		// void takeDamage(unsigned int amount);
		// void takeDamage(unsigned int amount);
		~ClapTrap();
};

