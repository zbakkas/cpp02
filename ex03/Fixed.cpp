#include "Fixed.hpp"

const int Fixed::fractional = 8;

Fixed::Fixed()
{
    value = 0;
    std::cout <<"Default constructor called\n";

}
Fixed::Fixed(const int converts):value(converts << fractional)
{
    std::cout <<"Int constructor called\n";
}
Fixed::Fixed(const float converts):value(roundf(converts * (1 << fractional)))
{
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
	return this->value >> fractional;
}

float Fixed::toFloat(void) const
{
	return (float)this->value / (float)(1 << fractional);
}


std::ostream    &operator<<(std::ostream &os, Fixed const &object)
{
    return (os << object.toFloat());
}


// Comparison operators
bool Fixed::operator>(const Fixed& other) const
{ return value > other.value; }
bool Fixed::operator<(const Fixed& other) const
{ return value < other.value; }
bool Fixed::operator>=(const Fixed& other) const
{ return value >= other.value; }
bool Fixed::operator<=(const Fixed& other) const
{ return value <= other.value; }
bool Fixed::operator==(const Fixed& other) const
{ return value == other.value; }
bool Fixed::operator!=(const Fixed& other) const
{ return value != other.value; }

// Arithmetic operators
Fixed Fixed::operator+(const Fixed& other) const
{
    return Fixed(this->toFloat() + other.toFloat());
}
Fixed Fixed::operator-(const Fixed& other) const
{
    return Fixed(this->toFloat() - other.toFloat());
}
Fixed Fixed::operator*(const Fixed& other) const
{
    return Fixed(this->toFloat() * other.toFloat());
}
Fixed Fixed::operator/(const Fixed& other) const
{
    if (other.value != 0)
        return Fixed(this->toFloat() / other.toFloat());
    else
    {
        std::cout << "Error: Division by zero\n";
        return Fixed(0);
    }
}

// Increment/Decrement operators
 Fixed& Fixed::operator++() 
{ // Pre-increment
    ++value;
    return *this;
}
Fixed Fixed::operator++(int) 
{ // Post-increment
    Fixed temp = *this;
    ++value;
    return temp;
}
Fixed& Fixed::operator--() 
{ // Pre-decrement
    --value;
    return *this;
}
Fixed Fixed::operator--(int) 
{ // Post-decrement
    Fixed temp = *this;
    --value;
    return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a > b) ? a : b;
}
