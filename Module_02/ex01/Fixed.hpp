/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:21:22 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/19 00:46:10 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
    private:
        int number;
        static const int bits = 8 ;
    public:
        Fixed(void);
        Fixed(const int number);
        Fixed(const float number); 
        Fixed(const Fixed& rhs);
        Fixed& operator=(const Fixed& rhs);
        float toFloat( void ) const;
        int toInt( void ) const;
        
        ~Fixed();

};

std::ostream & operator<<(std::ostream &out, const Fixed &fp);
