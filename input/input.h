// Programming 3, B8, Mr. Test
// Calum Hansen
// 9/8/26
// I wrote this myself
// template to make general purpose input library (returns input)
// Not suitable for extremely large types but that is very uncommon.
// Prompts for input and returns that.

#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
template <typename T>
// Parameters: prompt (will use this to ask user for input)
// Usage: int input = getInput<int>("Enter an Integer");
// Prompts for user input, then returns input of that type
T getInput(std::string_view prompt)
{
    std::cout << prompt;
    T userInput;
    std::string rawInput;
    while (true)
    {
        if (!std::getline(std::cin, rawInput))
        {
            std::cerr << "Input error encountered\n";
            std::exit(EXIT_FAILURE);
        }
        std::stringstream ss {rawInput};
        char extraChar;
        if (ss >> userInput && !(ss >> extraChar))
        {
            break;
        }
        std::cout << "Invalid format. Please try again\n";
    }
    return userInput;
}