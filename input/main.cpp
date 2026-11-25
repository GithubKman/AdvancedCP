#include <iostream>
#include <iomanip>
#include "input.h"
int main()
{
    double test = getInput<double>("please enter a Double\n");
    std::cout << std::setprecision(20) << test;
    return 0;
}