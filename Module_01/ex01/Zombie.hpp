/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:13:22 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/15 16:34:43 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class  Zombie
{
    private:
        std::string name;
    public:
        void announce( void );
        void set_Name(std::string name);
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );
