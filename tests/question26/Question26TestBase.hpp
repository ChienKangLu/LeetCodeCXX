#include "gtest/gtest.h"
#include "questions/question26/Solution.hpp"

template <typename T>
class Question26TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question26TestBase);

TYPED_TEST_P(Question26TestBase, test1) {
  // GIVEN
  vector<int> nums{1, 1, 2};

  // WHEN
  const int k = this->solution.removeDuplicates(nums);

  // THEN
  vector<int> expectedNums{1, 2};

  vector<int> resultNums{nums.begin(), nums.begin() + k};

  EXPECT_EQ(2, k);
  EXPECT_EQ(expectedNums, resultNums);
}

TYPED_TEST_P(Question26TestBase, test2) {
  // GIVEN
  vector<int> nums{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

  // WHEN
  const int k = this->solution.removeDuplicates(nums);

  // THEN
  vector<int> expectedNums{0, 1, 2, 3, 4};

  vector<int> resultNums{nums.begin(), nums.begin() + k};

  EXPECT_EQ(5, k);
  EXPECT_EQ(expectedNums, resultNums);
}