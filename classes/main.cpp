// Class demonstration for circles
// B8 Programming 3, Mr. Test
// [your name here]
// 10/12/26
// We wrote this together as a class
#include <iostream>
#include "circle.h"

int main() 
{
    Circle circle {42, 0, 0, "bluegreen"};
    std::cout << "The circle has a circumference of " 
              << circle.getCircumference() 
              << '\n';
    std::cout << "The circle has an area of "
              << circle.getArea()
              << '\n';
}