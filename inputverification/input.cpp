#include <iostream>
#include <string>

int main()
{
    std::string name { "" };
    int age { 0 };
    int year { 2026 };
    std::cout << "What is your name?" << "\n";
    std::getline(std::cin, name);

    std::cout << "How old are you?" << "\n";
    while (!(std::cin >> age)) {
        std::cin.clear();
        std::cin.ignore(512, '\n');
        std::cout << "try again\n";
    }

    std::cout << "Hello " << name << "\n";
    std::cout << "Were you born in " << 2026 - age << "?\n";

    return 0;
}