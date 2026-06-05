#include <gtest/gtest.h>
#include "sol.h"

class SolutionTest : public ::testing::Test {
protected:
    Sol solution;
};

TEST_F(SolutionTest, returnNotNull) {
    std::vector<std::vector<int>> matrix = {{0,1,1},{1,0,1},{1,1,0}};
    EXPECT_NE(nullptr, solution.findDegrees(&matrix));
}

TEST_F(SolutionTest, testThreeFullyConnectedVertices) {
    std::vector<std::vector<int>> matrix = {{0,1,1},{1,0,1},{1,1,0}};
    std::vector<int> expected = {2, 2, 2};
    auto* result = solution.findDegrees(&matrix);
    ASSERT_NE(nullptr, result);
    EXPECT_EQ(expected, *result);
}

TEST_F(SolutionTest, testTwoOfThreeVerticesConnected) {
    std::vector<std::vector<int>> matrix = {{0,1,0},{1,0,0},{0,0,0}};
    std::vector<int> expected = {1, 1, 0};
    auto* result = solution.findDegrees(&matrix);
    ASSERT_NE(nullptr, result);
    EXPECT_EQ(expected, *result);
}

TEST_F(SolutionTest, noVerticesConnected) {
    std::vector<std::vector<int>> matrix = {{0,0,0},{0,0,0},{0,0,0}};
    std::vector<int> expected = {0, 0, 0};
    auto* result = solution.findDegrees(&matrix);
    ASSERT_NE(nullptr, result);
    EXPECT_EQ(expected, *result);
}

TEST_F(SolutionTest, passNoMatrix) {
    EXPECT_EQ(nullptr, solution.findDegrees(nullptr));
}
