/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:20:42 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/19 22:22:53 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(0) , y(0)
{
}

Point::Point(float x, float y) : x(x), y(y)
{
}

Point::~Point()
{
    
}

int Point::getX() const
{
    return x.getNumber();
}
int Point::getY() const
{
    return y.getNumber();
}
