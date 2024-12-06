#include "gtest/gtest.h"
#include "questions/medianoftwosortedarrays/Solution.hpp"

template <typename T>
class MedianOfTwoSortedArraysTestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(MedianOfTwoSortedArraysTestBase);

TYPED_TEST_P(MedianOfTwoSortedArraysTestBase, test1) {
  // GIVEN
  vector<int> nums1{1, 3};
  vector<int> nums2{2};

  // WHEN
  const double result = this->solution.findMedianSortedArrays(nums1, nums2);

  // THEN
  EXPECT_EQ(result, 2);
}

TYPED_TEST_P(MedianOfTwoSortedArraysTestBase, test2) {
  // GIVEN
  vector<int> nums1{1, 2};
  vector<int> nums2{3, 4};

  // WHEN
  const double result = this->solution.findMedianSortedArrays(nums1, nums2);

  // THEN
  EXPECT_EQ(result, 2.5);
}

TYPED_TEST_P(MedianOfTwoSortedArraysTestBase, test3) {
  // GIVEN
  vector<int> nums1{1, 2, 3, 4, 5, 6};
  vector<int> nums2{7};

  // WHEN
  const double result = this->solution.findMedianSortedArrays(nums1, nums2);

  // THEN
  EXPECT_EQ(result, 4);
}

TYPED_TEST_P(MedianOfTwoSortedArraysTestBase, test4) {
  // GIVEN
  vector<int> nums1{7};
  vector<int> nums2{1, 2, 3, 4, 5, 6};

  // WHEN
  const double result = this->solution.findMedianSortedArrays(nums1, nums2);

  // THEN
  EXPECT_EQ(result, 4);
}

TYPED_TEST_P(MedianOfTwoSortedArraysTestBase, test5) {
  // GIVEN
  vector<int> nums1{1, 2, 3, 4, 5, 6};
  vector<int> nums2{};

  // WHEN
  const double result = this->solution.findMedianSortedArrays(nums1, nums2);

  // THEN
  EXPECT_EQ(result, 3.5);
}

TYPED_TEST_P(MedianOfTwoSortedArraysTestBase, test6) {
  // GIVEN
  vector<int> nums1{};
  vector<int> nums2{1, 2, 3, 4, 5, 6};

  // WHEN
  const double result = this->solution.findMedianSortedArrays(nums1, nums2);

  // THEN
  EXPECT_EQ(result, 3.5);
}

TYPED_TEST_P(MedianOfTwoSortedArraysTestBase, test7) {
  // GIVEN
  vector<int> nums1{1, 2, 3, 4, 5, 6, 7};
  vector<int> nums2{};

  // WHEN
  const double result = this->solution.findMedianSortedArrays(nums1, nums2);

  // THEN
  EXPECT_EQ(result, 4);
}

TYPED_TEST_P(MedianOfTwoSortedArraysTestBase, test8) {
  // GIVEN
  vector<int> nums1{};
  vector<int> nums2{1, 2, 3, 4, 5, 6, 7};

  // WHEN
  const double result = this->solution.findMedianSortedArrays(nums1, nums2);

  // THEN
  EXPECT_EQ(result, 4);
}

TYPED_TEST_P(MedianOfTwoSortedArraysTestBase, test9) {
  // GIVEN
  vector<int> nums1{1, 2, 3, 4, 5, 6};
  vector<int> nums2{1, 2, 7, 7, 7, 7};

  // WHEN
  const double result = this->solution.findMedianSortedArrays(nums1, nums2);

  // THEN
  EXPECT_EQ(result, 4.5);
}

TYPED_TEST_P(MedianOfTwoSortedArraysTestBase, test10) {
  // GIVEN
  vector<int> nums1{1, 2, 3, 4, 5, 6};
  vector<int> nums2{9, 9, 9, 9, 9, 9};

  // WHEN
  const double result = this->solution.findMedianSortedArrays(nums1, nums2);

  // THEN
  EXPECT_EQ(result, 7.5);
}

TYPED_TEST_P(MedianOfTwoSortedArraysTestBase, test11) {
  // GIVEN
  vector<int> nums1{9, 10};
  vector<int> nums2{2, 4, 6};

  // WHEN
  const double result = this->solution.findMedianSortedArrays(nums1, nums2);

  // THEN
  EXPECT_EQ(result, 6);
}

TYPED_TEST_P(MedianOfTwoSortedArraysTestBase, test12) {
  // GIVEN
  vector<int> nums1{1, 2, 3};
  vector<int> nums2{4, 5, 6};

  // WHEN
  const double result = this->solution.findMedianSortedArrays(nums1, nums2);

  // THEN
  EXPECT_EQ(result, 3.5);
}

TYPED_TEST_P(MedianOfTwoSortedArraysTestBase, test13) {
  // GIVEN
  vector<int> nums1{1, 2};
  vector<int> nums2{3, 4, 5, 6};

  // WHEN
  const double result = this->solution.findMedianSortedArrays(nums1, nums2);

  // THEN
  EXPECT_EQ(result, 3.5);
}

TYPED_TEST_P(MedianOfTwoSortedArraysTestBase, test14) {
  // GIVEN
  vector<int> nums1{2, 4};
  vector<int> nums2{1, 3, 5};

  // WHEN
  const double result = this->solution.findMedianSortedArrays(nums1, nums2);

  // THEN
  EXPECT_EQ(result, 3);
}

TYPED_TEST_P(MedianOfTwoSortedArraysTestBase, test15) {
  // GIVEN
  vector<int> nums1{1, 2};
  vector<int> nums2{3, 4, 5};

  // WHEN
  const double result = this->solution.findMedianSortedArrays(nums1, nums2);

  // THEN
  EXPECT_EQ(result, 3);
}

TYPED_TEST_P(MedianOfTwoSortedArraysTestBase, test16) {
  // GIVEN
  vector<int> nums1{1, 2};
  vector<int> nums2{3, 4, 5, 6, 7};

  // WHEN
  const double result = this->solution.findMedianSortedArrays(nums1, nums2);

  // THEN
  EXPECT_EQ(result, 4);
}

TYPED_TEST_P(MedianOfTwoSortedArraysTestBase, test17) {
  // GIVEN
  vector<int> nums1{2, 4, 6};
  vector<int> nums2{9, 10};

  // WHEN
  const double result = this->solution.findMedianSortedArrays(nums1, nums2);

  // THEN
  EXPECT_EQ(result, 6);
}