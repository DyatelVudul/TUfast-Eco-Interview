#include <gtest/gtest.h>
#include "sol.h"

class SolutionTest : public ::testing::Test {
protected:
    Sol solution;
};

TEST_F(SolutionTest, threeNumsFiveSteps_ReturnFour) {
    std::vector<int> nums = {3, 9, 7};
    EXPECT_EQ(4, solution.minOperations(nums, 5));
}

TEST_F(SolutionTest, threeNumsFourSteps_ReturnZero) {
    std::vector<int> nums = {4, 1, 3};
    EXPECT_EQ(0, solution.minOperations(nums, 4));
}

TEST_F(SolutionTest, twoNumsSixSteps_ReturnFive) {
    std::vector<int> nums = {3, 2};
    EXPECT_EQ(5, solution.minOperations(nums, 6));
}
