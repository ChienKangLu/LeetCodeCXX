#include "gtest/gtest.h"
#include "questions/question209/Solution.hpp"

template <typename T>
class Question209TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question209TestBase);

TYPED_TEST_P(Question209TestBase, test1) {
  // GIVEN
  int target = 7;
  vector<int> nums = {2, 3, 1, 2, 4, 3};

  // WHEN
  int result = this->solution.minSubArrayLen(target, nums);

  // THEN
  EXPECT_EQ(result, 2);
}

TYPED_TEST_P(Question209TestBase, test2) {
  // GIVEN
  int target = 4;
  vector<int> nums = {1, 4, 4};

  // WHEN
  int result = this->solution.minSubArrayLen(target, nums);

  // THEN
  EXPECT_EQ(result, 1);
}

TYPED_TEST_P(Question209TestBase, test3) {
  // GIVEN
  int target = 11;
  vector<int> nums = {1, 1, 1, 1, 1, 1, 1, 1};

  // WHEN
  int result = this->solution.minSubArrayLen(target, nums);

  // THEN
  EXPECT_EQ(result, 0);
}
