#define _USE_MATH_DEFINES
#include "circle.h"
#include <cmath>

Circle::Circle()
{
    radius = 1;
    centerX = 0;
    centerY = 0;
    color = "white";
}

//Circle::Circle(double rad, double cX, double cY, std::string clr)
//{
//    radius = rad;
//    centerX = cX;
//    centerY = cY;
//    color = clr;
//}

double Circle::getRadius() const
{
    return radius;
}

double Circle::getCenterX() const
{
    return centerX;
}

double Circle::getCenterY() const
{
    return centerY;
}

std::string Circle::getColor() const
{
    return color;
}

void Circle::setRadius(double rad)
{
    radius = rad;
}

void Circle::setCenterX(double cX)
{
    centerX = cX;
}

void Circle::setCenterY(double cY)
{
    centerY = cY;
}

void Circle::setColor(std::string clr)
{
    color = clr;
}

double Circle::getCircumference() const
{
    return 2 * M_PI * radius;
}

double Circle::getArea() const
{
    return M_PI * radius * radius;
}