#include "gtest/gtest.h"
#include "questions/minstack/Solution.hpp"

template <typename T>
class MinStackTestBase : public ::testing::Test 
{
protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(MinStackTestBase);

TYPED_TEST_P(MinStackTestBase, test1)
{
    // WHEN
    this->solution.minstackPush(-2);
    this->solution.minstackPush(0);
    this->solution.minstackPush(-3);
    auto value1 = this->solution.minstackGetMin(); // return -3
    this->solution.minstackPop();
    auto value2 = this->solution.minstackTop();    // return 0
    auto value3 = this->solution.minstackGetMin(); // return -2

    // THEN
    EXPECT_EQ(-3, value1);
    EXPECT_EQ(0, value2);
    EXPECT_EQ(-2, value3);
}

TYPED_TEST_P(MinStackTestBase, test2)
{
    // WHEN
    this->solution.minstackPush(-2);
    this->solution.minstackPush(0);
    this->solution.minstackPush(-1);
    auto value1 = this->solution.minstackGetMin(); // return -2
    auto value2 = this->solution.minstackTop(); // return -1
    this->solution.minstackPop();
    auto value3 = this->solution.minstackGetMin(); // return -2

    // THEN
    EXPECT_EQ(-2, value1);
    EXPECT_EQ(-1, value2);
    EXPECT_EQ(-2, value3);
}
