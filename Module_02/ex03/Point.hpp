/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:15:09 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/19 22:25:04 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        int a;
        Point();
        Point(float x, float y);
        int getX() const;
        int getY() const;
        ~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);