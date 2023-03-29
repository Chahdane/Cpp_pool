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
