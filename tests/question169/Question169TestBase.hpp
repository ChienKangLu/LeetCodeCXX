#include "gtest/gtest.h"
#include "questions/question169/Solution.hpp"

template <typename T>
class Question169TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question169TestBase);

TYPED_TEST_P(Question169TestBase, test1) {
  // GIVEN
  vector<int> nums{3, 2, 3};  // 1, 0, 1

  // WHEN
  const auto result = this->solution.majorityElement(nums);

  // THEN
  EXPECT_EQ(3, result);
}

TYPED_TEST_P(Question169TestBase, test2) {
  // GIVEN
  vector<int> nums{2, 2, 1, 1, 1, 2, 2};

  // WHEN
  const auto result = this->solution.majorityElement(nums);

  // THEN
  EXPECT_EQ(2, result);
}

TYPED_TEST_P(Question169TestBase, test3) {
  // GIVEN
  vector<int> nums{3, 3, 4};  // 1, 2, 1

  // WHEN
  const auto result = this->solution.majorityElement(nums);

  // THEN
  EXPECT_EQ(3, result);
}