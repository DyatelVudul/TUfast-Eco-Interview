#include <gtest/gtest.h>
#include "sol.h"

class SolutionTest : public ::testing::Test {
protected:
    Sol solution;
};

TEST_F(SolutionTest, testHelloString_Return13) {
    std::string s = "hello";
    EXPECT_EQ(13, solution.scoreOfString(&s));
}

TEST_F(SolutionTest, testNullString) {
    EXPECT_EQ(-1, solution.scoreOfString(nullptr));
}

TEST_F(SolutionTest, testEmptyString_Returns0) {
    std::string s = "";
    EXPECT_EQ(0, solution.scoreOfString(&s));
}

TEST_F(SolutionTest, testzazString_Return50) {
    std::string s = "zaz";
    EXPECT_EQ(50, solution.scoreOfString(&s));
}

TEST_F(SolutionTest, testSpecialCharactersIgnore) {
    std::string s = "\t\n";
    EXPECT_EQ(0, solution.scoreOfString(&s));
}
