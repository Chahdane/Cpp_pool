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
