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

