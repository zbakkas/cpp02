#include "Point.hpp"

Point::Point():x(0),y(0)
{

}
Point::Point(float _x, float  _y):x(_x),y(_y)
{
}

Point::Point(const Point& point):x(point.x),y(point.y)
{
}

Point &Point::operator=(const Point& point)
{
    (void) point;
    return *this;
}

float Point::getX() const
{
    return (float)x.toFloat();
}
float Point::getY() const
{
    return (float)y.toFloat();
}

Point::~Point()
{
    
}