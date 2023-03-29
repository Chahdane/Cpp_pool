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