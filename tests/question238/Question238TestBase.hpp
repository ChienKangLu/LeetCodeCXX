#include "gtest/gtest.h"
#include "questions/question238/Solution.hpp"

template <typename T>
class Question238TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question238TestBase);

TYPED_TEST_P(Question238TestBase, test1) {
  // GIVEN
  vector<int> nums{1, 2, 3, 4};

  // WHEN
  const auto result = this->solution.productExceptSelf(nums);

  // // THEN
  vector<int> expected{24, 12, 8, 6};
  EXPECT_EQ(expected, result);
}

TYPED_TEST_P(Question238TestBase, test2) {
  // GIVEN
  vector<int> nums{-1, 1, 0, -3, 3};

  // WHEN
  const auto result = this->solution.productExceptSelf(nums);

  // // THEN
  vector<int> expected{0, 0, 9, 0, 0};
  EXPECT_EQ(expected, result);
}