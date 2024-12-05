#include "Fixed.hpp"

int main( void ) {
Fixed a(2);
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << "a ="<<a << std::endl;
std::cout << "b =" << b << std::endl;
std::cout << "max " <<Fixed::max( a, b ) << std::endl;
std::cout << "min " <<Fixed::min( a, b ) << std::endl;

// Arithmetic
std::cout << "a + b = " << (a + b) << "\n";
std::cout << "a - b = " << (a - b) << "\n";
std::cout << "a * b = " << (a * b) << "\n";
std::cout << "a / b = " << (a / b) << "\n";
// Comparison
std::cout << "a > b: " << (a > b) << "\n";
std::cout << "a < b: " << (a < b) << "\n";
// Increment/Decrement
std::cout << "Pre-increment: " << ++a << "\n";
std::cout << "Post-increment: " << a++ << " -> " << a << "\n";
std::cout << "Pre-decrement: " << --a << "\n";
std::cout << "Post-decrement: " << a-- << " -> " << a << "\n";

return 0;
}
