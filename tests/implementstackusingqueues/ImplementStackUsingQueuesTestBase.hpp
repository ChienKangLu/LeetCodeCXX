#include "gtest/gtest.h"
#include "questions/implementstackusingqueues/Solution.hpp"

template <typename T>
class ImplementStackUsingQueuesTestBase : public ::testing::Test 
{
protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(ImplementStackUsingQueuesTestBase);

TYPED_TEST_P(ImplementStackUsingQueuesTestBase, test1)
{
    this->solution.push(1);
    this->solution.push(1);
    this->solution.push(2);
    EXPECT_EQ(this->solution.top(), 2);
    EXPECT_EQ(this->solution.pop(), 2);
    EXPECT_EQ(this->solution.empty(), false);
}