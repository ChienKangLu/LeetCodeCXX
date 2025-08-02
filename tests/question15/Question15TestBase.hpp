#include <algorithm>

#include "gtest/gtest.h"
#include "questions/question15/Solution.hpp"

template <typename T>
class Question15TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();

  void verifyTriplets(std::vector<std::vector<int>>& result,
                      std::vector<std::vector<int>>& expected) {
    EXPECT_EQ(result.size(), expected.size());

    for (auto& triplet : result) {
      sort(triplet.begin(), triplet.end());
    }

    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());

    EXPECT_EQ(result, expected);
  };
};

TYPED_TEST_SUITE_P(Question15TestBase);

TYPED_TEST_P(Question15TestBase, test1) {
  // GIVEN
  vector<int> nums = {-1, 0, 1, 2, -1, -4};

  // WHEN
  vector<vector<int>> result = this->solution.threeSum(nums);

  // THEN
  vector<vector<int>> expected = {{-1, -1, 2}, {-1, 0, 1}};
  this->verifyTriplets(result, expected);
}

TYPED_TEST_P(Question15TestBase, test2) {
  // GIVEN
  vector<int> nums = {0, 1, 1};

  // WHEN
  vector<vector<int>> result = this->solution.threeSum(nums);

  // THEN
  vector<vector<int>> expected = {};
  this->verifyTriplets(result, expected);
}

TYPED_TEST_P(Question15TestBase, test3) {
  // GIVEN
  vector<int> nums = {0, 0, 0};

  // WHEN
  vector<vector<int>> result = this->solution.threeSum(nums);

  // THEN
  vector<vector<int>> expected = {{0, 0, 0}};
  this->verifyTriplets(result, expected);
}