#include "gtest/gtest.h"
#include "questions/question232/Solution.hpp"

template <typename T>
class Question232TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question232TestBase);

TYPED_TEST_P(Question232TestBase, test1) {
  // WHEN
  this->solution.push(1);
  this->solution.push(2);
  auto value1 = this->solution.peek();   // return 1
  auto value2 = this->solution.pop();    // return 1
  auto value3 = this->solution.empty();  // return false

  // THEN
  EXPECT_EQ(1, value1);
  EXPECT_EQ(1, value2);
  EXPECT_EQ(false, value3);
}