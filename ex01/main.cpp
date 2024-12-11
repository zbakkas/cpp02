#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( 3.0f );
Fixed const c( 42.42f );
Fixed const d( b );
a = Fixed( 1234.4321f );
std::cout << "a is " << a << std::endl;//316015
std::cout << "b is " << b << std::endl;//2560
std::cout << "c is " << c << std::endl;//10860
std::cout << "d is " << d << std::endl;//2560
std::cout<<"/////////    int        /////////\n";
std::cout << "a is " << a.toInt() << " as integer" << std::endl;
std::cout << "b is " << b.toInt() << " as integer" << std::endl;
std::cout << "c is " << c.toInt() << " as integer" << std::endl;
std::cout << "d is " << d.toInt() << " as integer" << std::endl;
std::cout<<"/////////    float     ///////\n";
std::cout << "a is " << a.toFloat() << " as floater" << std::endl;
std::cout << "b is " << b.toFloat() << " as floater" << std::endl;
std::cout << "c is " << c.toFloat() << " as floater" << std::endl;
std::cout << "d is " << d.toFloat() << " as floater" << std::endl;

return 0;
}