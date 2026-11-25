// Programming 3, B8, Mr. Test
// Calum Hansen
// 9/3/26
// I wrote this myself with information from canvas and google
// Generates a random number then calls weather which prints a
// weather forecast based on the random number
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "weathercase.h"
int main() {
    std::cout << "Welcome, this is todays weather forecast.\n";
    std::srand(std::time(0));
    int weatherNum = rand() % 4;
    weather(weatherNum);
    std::cout << "Thanks for using the weather service!\n" 
              << "Press Enter to exit";
    std::cin.get();
    
    return 0;
}