#pragma once
#include <string>
#include <cstdint>
#include <random>
// Constants
static constexpr double federalTax { 20.0 };
static constexpr double stateTax { 7.5 };
static constexpr int overtimeHours { 40 };

// Employee class which models an employee with a random number
// used for the employeeNumber.
class Employee
{
private:
    uint32_t number;
    std::string name;
    std::string address;
    std::string phoneNumber;
    double wageHourly;
    double workHours;
public:
    // Constructors, default and parameterized
    Employee();
    // No constructor for number because it is randomly generated
    Employee(std::string nam,
             std::string addres,
             std::string phoNum,
             double wagHour,
             double wokHour
            )
            : name { nam }
            , address { addres }
            , phoneNumber { phoNum }
            , wageHourly { wagHour }
            , workHours { wokHour }
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        number = gen();
    }
    // Getters and Setters
    uint32_t getNumber() const;
    std::string getName() const;
    std::string getAddress() const;
    std::string getPhoneNumber() const;
    double getWageHourly() const;
    double getWorkHours() const;
    void setNumber(int);
    void setName(std::string_view);
    void setAddress(std::string_view);
    void setPhoneNumber(std::string_view);
    void setWageHourly(double);
    void setWorkHours(double);
    // Get gross income from current pay period
    // after 40 hours wage is payed at 1.5 hourly base pay
    // tax is removed.
    // Arguments: bool resetPayPeriod
    double calcPay(bool resetPayPeriod);
    double calcPay() const;
};