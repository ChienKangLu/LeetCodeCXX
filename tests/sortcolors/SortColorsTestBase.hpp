#include "gtest/gtest.h"
#include "questions/sortcolors/Solution.hpp"

template <typename T>
class SortColorsTestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(SortColorsTestBase);

TYPED_TEST_P(SortColorsTestBase, test1) {
  // GIVEN
  vector<int> nums{2, 0, 2, 1, 1, 0};

  // WHEN
  this->solution.sortColors(nums);

  // THEN
  vector<int> expected{0, 0, 1, 1, 2, 2};
  ASSERT_EQ(nums, expected);
}

TYPED_TEST_P(SortColorsTestBase, test2) {
  // GIVEN
  vector<int> nums{2, 0, 1};

  // WHEN
  this->solution.sortColors(nums);

  // THEN
  vector<int> expected{0, 1, 2};
  ASSERT_EQ(nums, expected);
}

TYPED_TEST_P(SortColorsTestBase, test3) {
  // GIVEN
  vector<int> nums{0};

  // WHEN
  this->solution.sortColors(nums);

  // THEN
  vector<int> expected{0};
  ASSERT_EQ(nums, expected);
}

TYPED_TEST_P(SortColorsTestBase, test4) {
  // GIVEN
  vector<int> nums{1};

  // WHEN
  this->solution.sortColors(nums);

  // THEN
  vector<int> expected{1};
  ASSERT_EQ(nums, expected);
}

TYPED_TEST_P(SortColorsTestBase, test5) {
  // GIVEN
  vector<int> nums{2};

  // WHEN
  this->solution.sortColors(nums);

  // THEN
  vector<int> expected{2};
  ASSERT_EQ(nums, expected);
}

TYPED_TEST_P(SortColorsTestBase, test6) {
  // GIVEN
  vector<int> nums{0, 1, 2, 1, 0, 2};

  // WHEN
  this->solution.sortColors(nums);

  // THEN
  vector<int> expected{0, 0, 1, 1, 2, 2};
  ASSERT_EQ(nums, expected);
}