// Copyright 2018 Matyasov Mixail
#include <gtest/gtest.h>
#include <string>
#include "include/Student.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


TEST(Student, can_create_student) {
    ASSERT_NO_THROW(Student s);
}

TEST(Student, can_create_default_student) {
    Student s;

    EXPECT_EQ(s.GetId(), 0);
}

TEST(Student, can_get_group) {
    int marks[] = { 2, 4, 5 };
    bool eq = true;
    std::string res = "123";
    Student st(1, 2, marks, "Volickov", res);

    std::string gr = Student::GetGroup(1);
    for (unsigned int i = 0; i < gr.length(); i++)
        if (gr[i] != res[i])
           eq = false;

    EXPECT_TRUE(eq);
}

TEST(Student, can_calculate_medium_mark) {
    int marks[] = { 2, 4, 5 };
    Student st(1, 3, marks, "Volickov", "123");

    float mark = st.CalculateMediumMark();

    EXPECT_EQ(mark, (2 + 4 + 5) / (float)3);
}

TEST(Student, can_not_student_create_from_wrong_file) {
    Student::Create_Students("123");

    EXPECT_EQ(Student::code, 1);
}

TEST(Student, can_create_student_with_negative_amountMark) {
    Student st(1, -1);

    EXPECT_EQ(st.GetAmountMarks(), 0);
}

TEST(Student, can_create_student_from_right_file) {
    ASSERT_NO_THROW(Student::Create_Students("Students.txt"));
}
