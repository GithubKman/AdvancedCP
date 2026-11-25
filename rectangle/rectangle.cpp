#include "rectangle.h"
double Rectangle::getHeight() const
{
    return height;
}
double Rectangle::getWidth() const
{
    return width;
}
double Rectangle::getXPosition() const
{
    return xPosition;
}
double Rectangle::getYPosition() const
{
    return yPosition;
}
void Rectangle::setHeight(double tallness)
{
    height = tallness;
}
void Rectangle::setWidth(double longness)
{
    width = longness;
}
void Rectangle::setXPosition(double leftRightPosition)
{
    xPosition = leftRightPosition;
}
void Rectangle::setYPosition(double fOfXPosition)
{
    yPosition = fOfXPosition;
}
double Rectangle::getArea() const
{
    return height * width;
}
double Rectangle::getPerimeter() const
{
    return height * 2 + width * 2;
}