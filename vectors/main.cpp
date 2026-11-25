#include <vector>
#include <print>
#include <ranges>
#include <type_traits>
#include "../input/input.h"

int main()
{
    std::vector<double> myVector {1, 2, 3, 4, 7};
    // use println for built in vector printing
    // requires c++23
    std::println("Vector: {}", myVector);
    std::println("Vector size: {}, capacity: {}", myVector.size(), myVector.capacity());
    myVector.push_back(getInput<std::ranges::range_value_t<decltype(myVector)>>("Enter an Int to add to Vector: "));
    std::println("Vector: {}", myVector);
    std::println("Vector size: {}, capacity: {}", myVector.size(), myVector.capacity());
    return 0;
}