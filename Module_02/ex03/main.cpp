/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:20:50 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/19 22:09:12 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <cmath>



int main( void ) {
    

    // in : example 
    {
        Point a(0,0);
        Point b(20, 0);
        Point c(10, 30);
        Point x(10, 15);

        (bsp(a, b, c, x)) ? std::cout<<"IN"<<"\n" : std::cout<<"OUT"<<"\n";
    }
    // out example : 
    {
        Point a(0,0);
        Point b(10, 30);
        Point c(20, 0);
        Point x(30, 15);

        (bsp(a, b, c, x)) ? std::cout<<"IN"<<"\n" : std::cout<<"OUT"<<"\n";
    }
    return 0;
}

