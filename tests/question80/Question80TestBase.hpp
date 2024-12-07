#include "gtest/gtest.h"
#include "questions/question80/Solution.hpp"

template <typename T>
class Question80TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question80TestBase);

TYPED_TEST_P(Question80TestBase, test1) {
  // GIVEN
  vector<int> nums{1, 1, 1, 2, 2, 3};

  // WHEN
  const int k = this->solution.removeDuplicates(nums);

  // THEN
  vector<int> expectedNums{1, 1, 2, 2, 3};

  vector<int> resultNums{nums.begin(), nums.begin() + k};

  EXPECT_EQ(expectedNums.size(), k);
  EXPECT_EQ(expectedNums, resultNums);
}

TYPED_TEST_P(Question80TestBase, test2) {
  // GIVEN
  vector<int> nums{0, 0, 1, 1, 1, 1, 2, 3, 3};

  // WHEN
  const int k = this->solution.removeDuplicates(nums);

  // THEN
  vector<int> expectedNums{0, 0, 1, 1, 2, 3, 3};

  vector<int> resultNums{nums.begin(), nums.begin() + k};

  EXPECT_EQ(expectedNums.size(), k);
  EXPECT_EQ(expectedNums, resultNums);
}