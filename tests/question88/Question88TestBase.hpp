#include "gtest/gtest.h"
#include "questions/question88/Solution.hpp"

template <typename T>
class Question88TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question88TestBase);

TYPED_TEST_P(Question88TestBase, test1) {
  // GIVEN
  std::vector<int> nums1{1, 2, 3, 0, 0, 0};
  int m = 3;
  std::vector<int> nums2{2, 5, 6};
  int n = 3;

  // WHEN
  this->solution.merge(nums1, m, nums2, n);

  // THEN
  std::vector<int> expected{1, 2, 2, 3, 5, 6};
  EXPECT_EQ(nums1, expected);
}

TYPED_TEST_P(Question88TestBase, test2) {
  // GIVEN
  std::vector<int> nums1{1};
  int m = 1;
  std::vector<int> nums2{};
  int n = 0;

  // WHEN
  this->solution.merge(nums1, m, nums2, n);

  // THEN
  std::vector<int> expected{1};
  EXPECT_EQ(nums1, expected);
}

TYPED_TEST_P(Question88TestBase, test3) {
  // GIVEN
  std::vector<int> nums1{};
  int m = 0;
  std::vector<int> nums2{1};
  int n = 1;

  // WHEN
  this->solution.merge(nums1, m, nums2, n);

  // THEN
  std::vector<int> expected{1};
  EXPECT_EQ(nums1, expected);
}