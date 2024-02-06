#include "gtest/gtest.h"
#include "questions/mergeintervals/Solution.hpp"

template <typename T>
class MergeIntervalsTestBase : public ::testing::Test 
{
protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(MergeIntervalsTestBase);

TYPED_TEST_P(MergeIntervalsTestBase, test1)
{
    // GIVEN
    vector<vector<int>> intervals{{1, 3}, {8, 10}, {15, 18}, {2, 6}};
    
    // WHEN
    vector<vector<int>> result = this->solution.merge(intervals);

    // THEN
    vector<vector<int>> expected{{ 1, 6 }, { 8, 10 }, { 15, 18 }};
    ASSERT_EQ(result, expected);
}

TYPED_TEST_P(MergeIntervalsTestBase, test2)
{
    // GIVEN
    vector<vector<int>> intervals{{1, 4}, {4, 5}};
    
    // WHEN
    vector<vector<int>> result = this->solution.merge(intervals);

    // THEN
    vector<vector<int>> expected{{1, 5}};
    ASSERT_EQ(result, expected);
}

TYPED_TEST_P(MergeIntervalsTestBase, test3)
{
    // GIVEN
    vector<vector<int>> intervals{};
    
    // WHEN
    vector<vector<int>> result = this->solution.merge(intervals);

    // THEN
    vector<vector<int>> expected{};
    ASSERT_EQ(result, expected);
}

TYPED_TEST_P(MergeIntervalsTestBase, test4)
{
    // GIVEN
    vector<vector<int>> intervals{{1, 2}};
    
    // WHEN
    vector<vector<int>> result = this->solution.merge(intervals);

    // THEN
    vector<vector<int>> expected{{1, 2}};
    ASSERT_EQ(result, expected);
}