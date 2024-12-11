#include "Point.hpp"

int main( void ) 
{
    Point c(1.6, 2);
    Point b(3, 1.5f);
    Point a(0, 0);
    Point point(2.7f, 1.4f);

    if (bsp(a,b,c,point))
        std::cout << "----------> inside the Triangle" << std::endl;
    else
        std::cout << "**********> outside the Triangle" << std::endl;

return 0;
}
