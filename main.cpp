#include <print>
#include <iostream>

int main() {
	for ( int i { 0 }; i < 100000; ++i) {
		std::println("{}", i);
		//std::cout << i << '\n';
	}
	return 0;
}
