#include <iostream>
void weather(int weatherInt) {
    switch (weatherInt) {
        case 0:
            std::cout << "It will be sunny today.\n";
            break;
        case 1:
            std::cout << "It will be cloudy today.\n";
            break;
        case 2:
            std::cout << "It will be very stormy today.\n";
            break;
        case 3:
            std::cout << "It will be cold and snowy today.\n";
            break;
        default:
            std::cout << "Error: Random number is not correct.\n";
            break;
    }
    return;
}