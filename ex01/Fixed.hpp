#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int value;
        static const int fractional;
    public:
        Fixed();
        Fixed(const int converts);
        Fixed(const float converts);
        Fixed(const Fixed& fixed);
        Fixed& operator = (const Fixed& fixed);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;

};
std::ostream& operator<<(std::ostream &os, Fixed const &object);

#endif