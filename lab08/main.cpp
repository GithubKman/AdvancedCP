// Programming 3, B8, Mr. Test
// Calum Hansen
// 9/3/26
// I wrote this myself with information from canvas and google
// Will get input 5 times into std::vector then gets the sum
// and prints the sum
#include <iostream>
#include <iomanip>
#include <print>
#include <vector>
#include "add_array.h"
#include "../input/input.h"

int main()
{
    constexpr int arraySize { 5 };
    std::vector<double> vector;
    double array[arraySize];
    for (int i = 0; i < arraySize; ++i)
    {
        vector.push_back(getInput<double>("Enter a Double into the Vector: "));
        // this is exactly the same as using two seperate for loops
        array[i] = vector.at(i);
    }
    // If I didn't set it equal above I would use this loop.
    //for (int i = 0; i < arraySize; ++i)
    //{
    //    array[i] = vector[i];
    //}
    double sum = addArray(array, arraySize);
    std::cout << std::fixed << std::setprecision(2) << "Sum: " << sum << '\n';
    std::println("Sum: {::.2}", sum);
    return 0;
}