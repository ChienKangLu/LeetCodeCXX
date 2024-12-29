#include "gtest/gtest.h"
#include "questions/question55/Solution.hpp"

template <typename T>
class Question55TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question55TestBase);

TYPED_TEST_P(Question55TestBase, test1) {
  // GIVEN
  vector<int> nums{2, 3, 1, 1, 4};

  // WHEN
  const auto result = this->solution.canJump(nums);

  // THEN
  EXPECT_TRUE(result);
}

TYPED_TEST_P(Question55TestBase, test2) {
  // GIVEN
  vector<int> nums{3, 2, 1, 0, 4};

  // WHEN
  const auto result = this->solution.canJump(nums);

  // THEN
  EXPECT_FALSE(result);
}