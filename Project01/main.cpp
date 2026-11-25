// Programming 3, B8, Mr. Test
// Calum Hansen
// 9/3/26
// I wrote this myself
// Creates two employee objects that are initalized with unique data
// and calls printCheck to get info about employees.
#include <iostream>
#include "employee.h"
// Prints basic data about employee takes one employee as input.
void printCheck(const Employee& employee)
{
    std::cout
        << "Name: " << employee.getName() << '\n'
        << "Net Pay: " << employee.calcPay() << '\n'
        << "Hours Worked: " << employee.getWorkHours() << '\n'
        << "Hourly Wage: " << employee.getWageHourly() << '\n'
        << "Phone Number: " << employee.getPhoneNumber() << '\n'
        << "Employee Number: " << employee.getNumber() << '\n'
        << '\n';
}
int main()
{
    Employee sara {"Sara",
                   "1000 S, 300 W, Saratoga Springs Utah 84045",
                   "801 642 8937",
                   23.67,
                   30};
    Employee charls {"Charls",
                   "2935 N, 2000 E, Saratoga Springs, Utah, 84045",
                   "801 123 9583",
                   32.69,
                   45};
    printCheck(sara);
    std::cout << "\n\n\n\n";
    printCheck(charls);
    return 0;
}