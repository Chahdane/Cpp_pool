/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:21:22 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/19 22:27:50 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

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
        Fixed operator+(const Fixed& rhs);
        Fixed operator-(const Fixed& rhs);
        Fixed operator*(const Fixed& rhs);
        Fixed operator/(const Fixed& rhs);
        bool operator==(const Fixed& rhs);
        bool operator!=(const Fixed& rhs);
        bool operator>(const Fixed& rhs) const;
        bool operator>=(const Fixed& rhs);
        bool operator<(const Fixed& rhs) const;
        bool operator<=(const Fixed& rhs);
        Fixed operator++(int);
        Fixed operator--(int);
        Fixed operator++();
        Fixed operator--();
        static Fixed& min(Fixed& a, Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        const static Fixed& min(const Fixed& a, const Fixed& b); 
        const static Fixed& max(const Fixed& a, const Fixed& b); 
        float toFloat( void ) const;
        int toInt( void ) const;
        int getNumber() const
        {
            return number>>8;
        }
        ~Fixed();

};

std::ostream & operator<<(std::ostream &out, const Fixed &fp);
#endif 
