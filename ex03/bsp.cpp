
#include "Point.hpp"

// Function to compute cross product
double crossProduct(Point const  a,Point const  b,Point const  point) {
    return (b.getX() - a.getX()) * (point.getY() - a.getY()) - (b.getY() - a.getY()) * (point.getX() - a.getX());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
       // Compute cross products
    double cross1 = crossProduct(a, b, point);
    double cross2 = crossProduct(b, c, point);
    double cross3 = crossProduct(c, a, point);

    std::cout<<"cross1" <<cross1<<"\n";
    std::cout<<"cross2" <<cross2<<"\n";
    std::cout<<"cross3" <<cross3<<"\n";

    if((cross1<=0.002 && cross1>= -0.002) || (cross2<=0.002 && cross2>= -0.002) || (cross3<=0.002 && cross3>= -0.002))
        return false;
    


    // Check if all cross products have the same sign
    bool hasPositive = (cross1 > 0) || (cross2 > 0) || (cross3 > 0);
    bool hasNegative = (cross1 < 0) || (cross2 < 0) || (cross3 < 0);

    std::cout <<hasPositive << hasNegative<<"\n";

    if(!hasPositive && !hasNegative)
        return false;
    return (true);
}