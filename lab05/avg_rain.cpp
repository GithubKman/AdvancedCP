// Programming 3, B8, Mr. Test
// Calum Hansen
// 9/8/26
// I wrote this myself with information from canvas and google
// Gets user input (double) for each month then
// calculates the average and prints it.
#include <iostream>
#include <format>
#include <iterator>
#include <string>
#include "input.h"

void printData(double rainfallIn[], std::string month[], int size)
{
    std::cout << std::format("{:<10} {:>8}\n", "Month", "Rainfall");
    std::cout << std::string(18, '-') << '\n';
    for (int i = 0; i < size; ++i)
    {
        std::cout << std::format("{:<10} {:>8}\n", month[i], rainfallIn[i]);
    }
    return;
}

int avgRain()
{
    constexpr int months { 12 };
    double rainfallIn[months];
    std::string month[months] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    //use old style constant for array size
    //std::size_t size {std::size(rainfallIn)};
    for (std::size_t i = 0; i < months; ++i)
    {
        double rain { 0.0 };
        std::cout << "Enter the amount of rain received in " << month[i] << ":\n";
        getInput(rain);
        rainfallIn[i] = rain;
    }
    double avgRain { 0.0 };
    for (const auto& rainfall: rainfallIn)
    {
        avgRain += rainfall;
    }
    avgRain /= std::size(rainfallIn);
    printData(rainfallIn, month, months);
    std::cout << '\n';
    std::cout << "Average rainfall: " << avgRain << "\n";
    return 0;
}