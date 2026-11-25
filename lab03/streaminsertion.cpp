#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <limits>
#include <typeinfo>

// i know a little bit of c++
void getInput(auto& variable)
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

int main() {
    // using list initialization for habit
    int age { 0 };
    std::cout << "Enter your age: ";
    getInput(age);
    double money { 0.0 };
    std::cout << "Enter how much money you have: ";
    getInput(money);
    std::string name { "" };
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Thank you "
              << name
              << ". You are "
              << age
              << " years old and you have $"
              // i was scared this function wouldn't work like this
              << std::setprecision(3)
              << money
              << '\n';
    return 0;
}