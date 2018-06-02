// Copyright 2018 Matyasov Mixail

#include <gtest/gtest.h>
#include <string>
#include<vector>
#include"include/wages_app.h"

using ::testing::internal::RE;
using std::vector;

class WagesAppTest : public::testing::Test {
 protected:
        void Act(vector<std::string> args_) {
        vector<const char*> options;

        options.push_back("appname");
        for (size_t i = 0; i < args_.size(); ++i) {
            options.push_back(args_[i].c_str());
        }

        const char** argv = &options.front();
        int argc = static_cast<int>(args_.size()) + 1;

        output_ = app_(argc, argv);
    }

    void Assert(std::string expected) {
        EXPECT_TRUE(RE::PartialMatch(output_, RE(expected)));
    }

 private:
    Application app_;
    std::string output_;

 private:
    std::string output;
    Application app;
};

TEST_F(WagesAppTest, When_argv_1_is_null) {
    vector<std::string> argc = {};

    Act(argc);

    Assert("Argument 1 is not correct");
}

TEST_F(WagesAppTest, When_argv_2_is_null) {
    vector<std::string> argc = {"1"};

    Act(argc);

    Assert("Argument 2 is not correct");
}

TEST_F(WagesAppTest, When_argv_3_is_null) {
    vector<std::string> argc = {"1", "1"};

    Act(argc);

    Assert("Argument 3 is not correct");
}

TEST_F(WagesAppTest, When_argv_4_is_null) {
    vector<std::string> argc = { "1", "1", "1" };

    Act(argc);

    Assert("Argument 4 is not correct");
}

TEST_F(WagesAppTest, When_argv_5_is_null) {
    vector<std::string> argc = { "1", "1", "1", "1"};

    Act(argc);

    Assert("Argument 5 is not correct");
}
