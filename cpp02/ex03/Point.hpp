#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    const Fixed x;
    const Fixed y;
public:
    Point();
    ~Point();
};

Point::Point()
{
}

Point::~Point()
{
}


#endif