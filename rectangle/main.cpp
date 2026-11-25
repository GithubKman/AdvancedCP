// Lab 10 demonstrating a Rectangle class
// B8 Programming 3, Mr. Test
// Calum Hansen
// 10/14/26
// I wrote this myself with variable name inspiration from Noah Haitch
#include <iostream>
#include "rectangle.h"
int main()
{
    Rectangle myRec {4.0000005, 6.999999995, 123853, 937295729};
    std::cout
        << "Height: "
        << myRec.getHeight()
        << " Width: "
        << myRec.getWidth() << '\n';
    std::cout << "Area: " << myRec.getArea() << '\n';
}