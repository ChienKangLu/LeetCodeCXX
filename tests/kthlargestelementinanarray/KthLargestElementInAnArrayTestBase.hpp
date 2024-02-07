#include "gtest/gtest.h"
#include "questions/kthlargestelementinanarray/Solution.hpp"

template <typename T>
class KthLargestElementInAnArrayTestBase : public ::testing::Test 
{
protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(KthLargestElementInAnArrayTestBase);

TYPED_TEST_P(KthLargestElementInAnArrayTestBase, test1)
{
    // GIVEN
    vector<int> nums{3, 2, 1, 5, 6, 4};
    int k = 2;

    // WHEN
    int result = this->solution.findKthLargest(nums, k);

    // THEN
    EXPECT_EQ(result, 5);
}

TYPED_TEST_P(KthLargestElementInAnArrayTestBase, test2)
{
    // GIVEN
    vector<int> nums{3, 2, 3, 1, 2, 4, 5, 5, 6};
    int k = 4;

    // WHEN
    int result = this->solution.findKthLargest(nums, k);

    // THEN
    EXPECT_EQ(result, 4);
}

TYPED_TEST_P(KthLargestElementInAnArrayTestBase, test3)
{
    if (typeid(this->solution) == typeid(Solution2)) {
        GTEST_SKIP() << "Skipping 'test3' for Solution2 because it takes about 18 seconds";
    }

    // GIVEN
    const int length = 100000;
    vector<int> nums(length, 1);
    nums[0] = 1;
    nums[1] = 2;
    nums[2] = 3;
    nums[3] = 4;
    nums[5] = 4;

    nums[length - 1] = -1;
    nums[length - 2] = -2;
    nums[length - 3] = -3;
    nums[length - 4] = -4;
    nums[length - 5] = -4;

    int k = 50000;

    // WHEN
    int result = this->solution.findKthLargest(nums, k);

    // THEN
    EXPECT_EQ(result, 1);
}