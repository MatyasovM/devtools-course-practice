// Copyright 2018 Matyasov Mixail

#include <gtest/gtest.h>
#include"include/Application.h"

TEST(Application, can_double_to_string) {
    std::string str = "123.54";


    EXPECT_TRUE(str.compare(Application::DoubleToString(123.54)));
}

TEST(Application, can_int_to_string) {
    std::string str = "123";


    EXPECT_TRUE(str.compare(Application::DoubleToString(123)));
}

TEST(Application, can_string_to_double) {
    double val = 123.54;

    EXPECT_EQ(val, Application::StringToDouble((char*)"123.54"));
}

TEST(Application, can_string_to_int) {
    double val = 123;

    EXPECT_EQ(val, Application::StringToDouble((char*)"123"));
}

TEST(Application, can_int_to_Month) {
    Application::IntToMonth(1);
    Application::IntToMonth(2);
    Application::IntToMonth(3);
    Application::IntToMonth(4);
    Application::IntToMonth(5);
    Application::IntToMonth(6);
    Application::IntToMonth(7);
    Application::IntToMonth(8);
    Application::IntToMonth(9);
    Application::IntToMonth(10);
    Application::IntToMonth(11);
    Application::IntToMonth(12);

    EXPECT_EQ(January, Application::IntToMonth(1));
}

TEST(Application, can_CalculateWages) {
    int argc = 6;
    char** argv;
    argv = new char*[argc];
    argv[0] = (char*)"";
    argv[1] = (char*)"CalculateWages";
	argv[2] = (char*)"10000";
    argv[3] = (char*)"0";
    argv[4] = (char*)"0";
    argv[5] = (char*)"0";
    Application app;


    ASSERT_NO_THROW(app(argc, argv));
}

TEST(Application, can_CalucateHourlyPay) {
    int argc = 6;
    char** argv;
    argv = new char*[argc];
    argv[0] = (char*)"";
    argv[1] = (char*)"HourlyPay";
    argv[2] = (char*)"10000";
    argv[3] = (char*)"0";
    argv[4] = (char*)"0";
    argv[5] = (char*)"0";
    Application app;


    ASSERT_NO_THROW(app(argc, argv));
}

TEST(Application, can_CalculationOvertimePayment) {
    int argc = 6;
    char** argv;
    argv = new char*[argc];
    argv[0] = (char*)"";
    argv[1] = (char*)"CalculationOvertimePayment";
    argv[2] = (char*)"10000";
    argv[3] = (char*)"0";
    argv[4] = (char*)"0";
    argv[5] = (char*)"0";
    Application app;


    ASSERT_NO_THROW(app(argc, argv));
}

TEST(Application, can_CalculationWagesWithoutOvertime) {
    int argc = 6;
    char** argv;
    argv = new char*[argc];
    argv[0] = (char*)"";
    argv[1] = (char*)"CalculationWagesWithoutOvertime";
    argv[2] = (char*)"10000";
    argv[3] = (char*)"0";
    argv[4] = (char*)"0";
    argv[5] = (char*)"0";
    Application app;


    ASSERT_NO_THROW(app(argc, argv));
}