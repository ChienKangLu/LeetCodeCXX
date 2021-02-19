#include "gtest/gtest.h"
#include "questions/searchinsertposition/Solution.hpp"

template <typename T>
class SearchInsertPositionTestBase : public ::testing::Test 
{
protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
  std::vector<int> nums;
  int target;
};

TYPED_TEST_SUITE_P(SearchInsertPositionTestBase);

TYPED_TEST_P(SearchInsertPositionTestBase, test1)
{
    // GIVEN
    this->nums = { 1, 3, 5, 6 };
    this->target = 5;

    // WHEN
    int index = this->solution.searchInsert(this->nums, this->target);

    // THEN
    ASSERT_EQ(2, index);
}

TYPED_TEST_P(SearchInsertPositionTestBase, test2)
{
    // GIVEN
    this->nums = { 1, 3, 5, 6 };
    this->target = 2;

    // WHEN
    int index = this->solution.searchInsert(this->nums, this->target);

    // THEN
    ASSERT_EQ(1, index);
}

TYPED_TEST_P(SearchInsertPositionTestBase, test3)
{
    // GIVEN
    this->nums = { 1, 3, 5, 6 };
    this->target = 7;

    // WHEN
    int index = this->solution.searchInsert(this->nums, this->target);

    // THEN
    ASSERT_EQ(4, index);
}

TYPED_TEST_P(SearchInsertPositionTestBase, test4)
{
    // GIVEN
    this->nums = { 1, 3, 5, 6 };
    this->target = 0;

    // WHEN
    int index = this->solution.searchInsert(this->nums, this->target);

    // THEN
    ASSERT_EQ(0, index);
}

TYPED_TEST_P(SearchInsertPositionTestBase, test5)
{
    // GIVEN
    this->nums = { 1 };
    this->target = 0;

    // WHEN
    int index = this->solution.searchInsert(this->nums, this->target);

    // THEN
    ASSERT_EQ(0, index);
}