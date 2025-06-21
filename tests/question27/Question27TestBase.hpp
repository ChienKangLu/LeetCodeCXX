#include <algorithm>

#include "gtest/gtest.h"
#include "questions/question27/Solution.hpp"

template <typename T>
class Question27TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question27TestBase);

TYPED_TEST_P(Question27TestBase, test1) {
  // GIVEN
  vector<int> nums{3, 2, 2, 3};
  const int val = 3;

  // WHEN
  const int k = this->solution.removeElement(nums, val);

  // THEN
  vector<int> expectedNums{2, 2};

  sort(expectedNums.begin(), expectedNums.end());

  vector<int> resultNums{nums.begin(), nums.begin() + k};
  sort(resultNums.begin(), resultNums.end());

  EXPECT_EQ(expectedNums.size(), k);
  EXPECT_EQ(expectedNums, resultNums);
}

TYPED_TEST_P(Question27TestBase, test2) {
  // GIVEN
  vector<int> nums{0, 1, 2, 2, 3, 0, 4, 2};
  const int val = 2;

  // WHEN
  const int k = this->solution.removeElement(nums, val);

  // THEN
  vector<int> expectedNums{0, 1, 4, 0, 3};

  sort(expectedNums.begin(), expectedNums.end());

  vector<int> resultNums{nums.begin(), nums.begin() + k};
  sort(resultNums.begin(), resultNums.end());

  EXPECT_EQ(expectedNums.size(), k);
  EXPECT_EQ(expectedNums, resultNums);
}