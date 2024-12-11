
#include "Point.hpp"

// Function to compute cross product
//(A,B,C)= (x2​−x1​)⋅(y3​−y1​)−(y2​−y1​)⋅(x3​−x1​)
double crossProduct(Point const  a,Point const  b,Point const  point) 
{
    return (b.getX() - a.getX()) * (point.getY() - a.getY()) - (b.getY() - a.getY()) * (point.getX() - a.getX());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{

    double cross1 = crossProduct(a, b, point);
    double cross2 = crossProduct(b, c, point);
    double cross3 = crossProduct(c, a, point);

    // std::cout<<"cross1" <<cross1<<"\n";
    // std::cout<<"cross2" <<cross2<<"\n";
    // std::cout<<"cross3" <<cross3<<"\n";

    // if ()
    if((cross1<=0.002 && cross1>= -0.002) || (cross2<=0.002 && cross2>= -0.002) || (cross3<=0.002 && cross3>= -0.002))
        return false;
    



    // bool hasPositive = false;
    // bool hasNegative = false;

    // if( (cross1 > 0) || (cross2 > 0) || (cross3 > 0))
    //     hasPositive =true;
    // if((cross1 < 0) || (cross2 < 0) || (cross3 < 0))
    //     hasNegative =true;

    // std::cout <<hasPositive << "<->"<<hasNegative<<"\n";

    if(( (cross1 > 0) || (cross2 > 0) || (cross3 > 0)) && ((cross1 < 0) || (cross2 < 0) || (cross3 < 0)))
        return false;
    return (true);
}