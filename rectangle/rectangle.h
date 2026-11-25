#pragma once
class Rectangle 
{
private:
    double height;
    double width;
    double xPosition;
    double yPosition;
public:
    Rectangle(double tallness, 
              double longness, 
              double leftRightPosition, 
              double fOfXPosition)
        : height { tallness }
        , width { longness }
        , xPosition { leftRightPosition }
        , yPosition { fOfXPosition }
    {}
    double getHeight() const;
    double getWidth() const;
    double getXPosition() const;
    double getYPosition() const;
    void setHeight(double tallness);
    void setWidth(double longness);
    void setXPosition(double leftRightPosition);
    void setYPosition(double fOfXPosition);
    double getArea() const;
    double getPerimeter() const;


};