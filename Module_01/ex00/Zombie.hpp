/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:52:42 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/15 15:16:24 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

class  Zombie
{
    private:
        std::string name;
    public:
        void announce( void );
        Zombie(std::string name);
        ~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
