// Copyright 2018 Matyasov Mixail

#include <gtest/gtest.h>
#include"include/wages_app.h"

TEST(Application, can_double_to_string) {
    std::string str = "123.54";
    Application app;


    EXPECT_TRUE(str.compare(app.DoubleToString(123.54)));
}

TEST(Application, can_int_to_string) {
    std::string str = "123";
    Application app;


    EXPECT_TRUE(str.compare(app.DoubleToString(123)));
}

TEST(Application, can_string_to_double) {
    double val = 123.54;
    Application app;

    EXPECT_EQ(val, app.StringToDouble(static_cast<char*>("123.54")));
}

TEST(Application, can_string_to_int) {
    double val = 123;
    Application app;

    EXPECT_EQ(val, app.StringToDouble(static_cast<char*>("123")));
}

TEST(Application, can_int_to_Month) {
    Application app;
    app.IntToMonth(1);
    app.IntToMonth(2);
    app.IntToMonth(3);
    app.IntToMonth(4);
    app.IntToMonth(5);
    app.IntToMonth(6);
    app.IntToMonth(7);
    app.IntToMonth(8);
    app.IntToMonth(9);
    app.IntToMonth(10);
    app.IntToMonth(11);
    app.IntToMonth(12);

    EXPECT_EQ(January, app.IntToMonth(1));
}

TEST(Application, can_CalculateWages) {
    int argc = 6;
    char** argv;
    argv = new char*[argc];
    argv[0] = static_cast<char*>("");
    argv[1] = static_cast<char*>("CalculateWages");
	argv[2] = static_cast<char*>("10000");
    argv[3] = static_cast<char*>("0");
    argv[4] = static_cast<char*>("0");
    argv[5] = static_cast<char*>("0");
    Application app;


    ASSERT_NO_THROW(app(argc, argv));
}

TEST(Application, can_CalucateHourlyPay) {
    int argc = 6;
    char** argv;
    argv = new char*[argc];
    argv[0] = static_cast<char*>("");
    argv[1] = static_cast<char*>("HourlyPay");
    argv[2] = static_cast<char*>("10000");
    argv[3] = static_cast<char*>("0");
    argv[4] = static_cast<char*>("0");
    argv[5] = static_cast<char*>("0");
    Application app;


    ASSERT_NO_THROW(app(argc, argv));
}

TEST(Application, can_CalculationOvertimePayment) {
    int argc = 6;
    char** argv;
    argv = new char*[argc];
    argv[0] = static_cast<char*>("");
    argv[1] = static_cast<char*>("CalculationOvertimePayment");
    argv[2] = static_cast<char*>("10000");
    argv[3] = static_cast<char*>("0");
    argv[4] = static_cast<char*>("0");
    argv[5] = static_cast<char*>("0");
    Application app;


    ASSERT_NO_THROW(app(argc, argv));
}

TEST(Application, can_CalculationWagesWithoutOvertime) {
    int argc = 6;
    char** argv;
    argv = new char*[argc];
    argv[0] = static_cast<char*>("");
    argv[1] = static_cast<char*>("CalculationWagesWithoutOvertime");
    argv[2] = static_cast<char*>("10000");
    argv[3] = static_cast<char*>("0");
    argv[4] = static_cast<char*>("0");
    argv[5] = static_cast<char*>("0");
    Application app;


    ASSERT_NO_THROW(app(argc, argv));
}