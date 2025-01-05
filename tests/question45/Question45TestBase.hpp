#include "gtest/gtest.h"
#include "questions/question45/Solution.hpp"

template <typename T>
class Question45TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question45TestBase);

TYPED_TEST_P(Question45TestBase, test1) {
  // GIVEN
  vector<int> nums{2, 3, 1, 1, 4};

  // WHEN
  const auto result = this->solution.jump(nums);

  // THEN
  EXPECT_EQ(2, result);
}

TYPED_TEST_P(Question45TestBase, test2) {
  // GIVEN
  vector<int> nums{2, 3, 0, 1, 4};

  // WHEN
  const auto result = this->solution.jump(nums);

  // THEN
  EXPECT_EQ(2, result);
}