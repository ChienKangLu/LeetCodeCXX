#include "gtest/gtest.h"
#include "questions/question167/Solution.hpp"

template <typename T>
class Question167TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question167TestBase);

TYPED_TEST_P(Question167TestBase, test1) {
  // GIVEN
  vector<int> numbers{2, 7, 11, 15};
  const int target = 9;

  // WHEN
  vector<int> result = this->solution.twoSum(numbers, target);

  // THEN
  vector<int> expected{1, 2};
  EXPECT_EQ(expected, result);
}

TYPED_TEST_P(Question167TestBase, test2) {
  // GIVEN
  vector<int> numbers{2, 3, 4};
  const int target = 6;

  // WHEN
  vector<int> result = this->solution.twoSum(numbers, target);

  // THEN
  vector<int> expected{1, 3};
  EXPECT_EQ(expected, result);
}

TYPED_TEST_P(Question167TestBase, test3) {
  // GIVEN
  vector<int> numbers{-1, 0};
  const int target = -1;

  // WHEN
  vector<int> result = this->solution.twoSum(numbers, target);

  // THEN
  vector<int> expected{1, 2};
  EXPECT_EQ(expected, result);
}
