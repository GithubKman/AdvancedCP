// Author: calumHansen
// Assignment: 02
// Instructor: Mr. Test
// Class: CNS 1250 Section: sectionNumber
// Date Written: 25/8/26
// Description: Lab 02 assignment which follows basic dialogue
//
//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part,
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#include <iostream>
#include <string>

int main()
{
	const std::string myName { "Calum" };
	std::cout << "Hello, my name is " << myName << ", what is your name?\n";
	std::string yourName { "null" };
	std::getline(std::cin, yourName);
	std::cout << "Welcome to C++ " << yourName << ", let the adventure begin!\n";
	return 0;
}
