#include <print>
//#include <cstdint>

int main() {
    const int SIZE { 8 };
    int array[SIZE] { 1, 2, 3, 4, 5, 6 ,7, 8 };
    std::println("Array: {}", array);
    std::println("Array at {}+1: {}", SIZE, array[SIZE + 1]);
    return 0;
}