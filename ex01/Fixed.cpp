#include "Fixed.hpp"

const int Fixed::fractional =8;

Fixed::Fixed()
{
    value = 0;
    std::cout <<"Default constructor called\n";

}


Fixed::Fixed(const int intvalue):value(intvalue << fractional)
{
    // value = intvalue *pow(2,fractional);
    std::cout <<"Int constructor called\n";
}
Fixed::Fixed(const float floatvalue)
{
    // value =roundf(floatvalue* pow(2,fractional));
    this->value = roundf(floatvalue * (1 << fractional));
    std::cout <<"Float constructor called\n";
}

Fixed::Fixed(const Fixed& fixed)
{
    this->value = fixed.value;
    std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator=(const Fixed& fixed)
{
    this->value = fixed.value;
    std::cout <<"Copy assignment operator called\n";
    return *this;
}

Fixed::~Fixed()
{
    std::cout<< "Destructor called\n";
}

int Fixed::getRawBits(void)const
{
    std::cout << "getRawBits member function called\n";
    return value;
}
void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called\n";
    value =raw;
}


int Fixed::toInt(void) const
{
    return value /pow(2,fractional);
	// return this->value >> fractional;
}

float Fixed::toFloat(void) const
{
	// return (float)this->value / (float)(1 << fractional);
    return (float)value /pow(2,fractional);
}


std::ostream    &operator<<(std::ostream &os, Fixed const &object)
{
    return (os << object.toFloat());
}