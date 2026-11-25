#include "employee.h"
Employee::Employee()
{
    std::random_device rd;
    std::mt19937 gen(rd());

    number = gen();
    name = "John Doe ";
    address = "123 example ln, not a city, 12345";
    phoneNumber = "+1 (123) 456 7890";
    wageHourly = 7.25;
    workHours = 0;
}
uint32_t Employee::getNumber() const
{
    return number;
}
std::string Employee::getName() const
{
    return name;
}
std::string Employee::getAddress() const
{
    return address;
}
std::string Employee::getPhoneNumber() const
{
    return phoneNumber;
}
double Employee::getWageHourly() const
{
    return wageHourly;
}
double Employee::getWorkHours() const
{
    return workHours;
}
void Employee::setNumber(int num)
{
    number = num;
}
// need to test std::string_view and const std::string&
void Employee::setName(std::string_view nam)
{
    name = nam;
}
void Employee::setAddress(std::string_view addres)
{
    address = addres;
}
void Employee::setPhoneNumber(std::string_view phoNum)
{
    phoneNumber = phoNum;
}
void Employee::setWageHourly(double wagHour)
{
    wageHourly = wagHour;
}
void Employee::setWorkHours(double wokHour)
{
    workHours = wokHour;
}
double Employee::calcPay(bool resetPayPeriod)
{
    double pay { Employee::calcPay() };
    if (resetPayPeriod)
    {
        workHours = 0;
    }
    return pay;
}
double Employee::calcPay() const
{
    double pay { workHours * wageHourly };
    pay += wageHourly * ((workHours - overtimeHours) > 0) 
                        ? (workHours - overtimeHours)
                        : 0;
    return pay;
}