#include "Point.hpp"

int main( void ) 
{
    Point a(1.6, 2);
    Point b(1.6f, 0.5f);
    Point c(0, 0);
    Point point(0.64f, 0.8f);

    if (bsp(a,b,c,point))
        std::cout << "----------> inside the Triangle" << std::endl;
    else
        std::cout << "**********> outside the Triangle" << std::endl;

return 0;
}
