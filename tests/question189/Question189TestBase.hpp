#include "gtest/gtest.h"
#include "questions/question189/Solution.hpp"

template <typename T>
class Question189TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question189TestBase);

TYPED_TEST_P(Question189TestBase, test1) {
  // GIVEN
  vector<int> nums{1, 2, 3, 4, 5, 6, 7};
  int k = 3;

  // WHEN
  this->solution.rotate(nums, k);

  // THEN
  vector<int> expected{5, 6, 7, 1, 2, 3, 4};
  EXPECT_EQ(expected, nums);
}

TYPED_TEST_P(Question189TestBase, test2) {
  // GIVEN
  vector<int> nums{-1, -100, 3, 99};
  int k = 2;

  // WHEN
  this->solution.rotate(nums, k);

  // THEN
  vector<int> expected{3, 99, -1, -100};
  EXPECT_EQ(expected, nums);
}