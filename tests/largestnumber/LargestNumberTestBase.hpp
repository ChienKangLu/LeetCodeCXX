#include "gtest/gtest.h"
#include "questions/largestnumber/Solution.hpp"

template <typename T>
class LargestNumberTestBase : public ::testing::Test 
{
protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(LargestNumberTestBase);

TYPED_TEST_P(LargestNumberTestBase, test1)
{
    // GIVEN
    vector<int> nums {10, 2};
    
    // WHEN
    string ans = this->solution.largestNumber(nums);

    // THEN
    ASSERT_EQ(ans, "210");
}

TYPED_TEST_P(LargestNumberTestBase, test2)
{
    // GIVEN
    vector<int> nums {3, 30, 34, 5, 9};
    
    // WHEN
    string ans = this->solution.largestNumber(nums);

    // THEN
    ASSERT_EQ(ans, "9534330");
}

TYPED_TEST_P(LargestNumberTestBase, test3)
{
    // GIVEN
    vector<int> nums {0, 0, 0};
    
    // WHEN
    string ans = this->solution.largestNumber(nums);

    // THEN
    ASSERT_EQ(ans, "0");
}