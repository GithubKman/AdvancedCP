// Programming 3, B8, Mr. Test
// Calum Hansen
// 9/8/26
// I wrote this myself
// Uses template to make general single variable input library
// which prompts for input and sets the variable inputted to that.

#pragma once
#include <iostream>
template <typename T>
void getInput(T& variable)
{
    while(!(std::cin >> variable)) {
        std::cin.clear();
        // i guess std::numeric_limits will find the size of the input stream
        // and return it instead of using constant 512.
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "That wasn't a number of type "
                  << typeid(variable).name()
                  << ". Please try again\n";
    }
    // make compatible with std::getline by removing old \n character
    std::cin.ignore();
    return;
}