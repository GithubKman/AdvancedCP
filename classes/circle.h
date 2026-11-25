#pragma once

#include <string>

class Circle
{
private:
    double radius;
    double centerX;
    double centerY;
    std::string color;
public:
    Circle();
    Circle(double rad, double cX, double cY, std::string clr) :
        radius { rad },
        centerX { cX },
        centerY { cY },
        color { clr }
        {}
    double getRadius() const;
    double getCenterX() const;
    double getCenterY() const;
    std::string getColor() const;
    void setRadius(double);
    void setCenterX(double);
    void setCenterY(double);
    void setColor(std::string);
    double getCircumference() const;
    double getArea() const;
};