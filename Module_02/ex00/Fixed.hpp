/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:21:22 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/19 22:30:56 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
    private:
        int number;
        static const int bits = 8 ;
    public:
        Fixed();
        Fixed(const Fixed& rhs);
        Fixed& operator=(const Fixed& rhs);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

