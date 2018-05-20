// Copyright 2018 Matyasov Mixail

#pragma once
#include"include/Wages.h"
#include<iostream>
#include<string>

class Application {
    static double calculatedValues;
public:
    Application();
    static std::string DoubleToString(double val);
    static double StringToDouble(const char* str);
    static Month IntToMonth(int val);
    static double GetCalculatedValues() { return calculatedValues; }
    static std::string CalculateWages(double salary, double administrativeLeaveHours, double overtime, Month month);
    static std::string CalculateHourlyPay(double salary, double administrativeLeaveHours, double overtime, Month month);
    static std::string CalculationWagesWithoutOvertime(double salary, double administrativeLeaveHours, double overtime, Month month);
    static std::string CalculationOvertimePayment(double salary, double administrativeLeaveHours, double overtime, Month month);

    std::string operator()(int argc, char** argv);
};
