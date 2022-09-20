/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:16:01 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/19 22:25:59 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int area_of_triangle(Point const a, Point const b, Point const c)
{
    int x1 = a.getX();
   // std::cout << x1 << std::endl;
    int x2 = b.getX();
    int y1 = a.getY();
    int y2 = b.getY();
    //std::cout << x1 << std::endl;
    int y3 = c.getY();
    int x3 = c.getX();
    int res = abs(x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0;
    return (res);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{

    int full_area = area_of_triangle(a, b, c);
    
    int apc = area_of_triangle(a, point, c);
    int apb =area_of_triangle(a, point, b);
    int bpc = area_of_triangle(b, point, c);
    
    if (full_area == (apc + apb + bpc))
        return true;
    else
        return false;
}