#include "gtest/gtest.h"
#include "questions/spiralmatrix/Solution.hpp"

template <typename T>
class SpiralMatrixTestBase : public ::testing::Test 
{
protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(SpiralMatrixTestBase);

TYPED_TEST_P(SpiralMatrixTestBase, test1)
{
    // GIVEN
    vector<vector<int>> matrix{
      vector<int>{1, 2, 3},
      vector<int>{4, 5, 6},
      vector<int>{7, 8, 9},
    };
    
    // WHEN
    auto result = this->solution.spiralOrder(matrix);

    // THEN
    vector<int> expected{1, 2, 3, 6, 9, 8, 7, 4, 5};
    ASSERT_EQ(result, expected);
}

TYPED_TEST_P(SpiralMatrixTestBase, test2)
{
    // GIVEN
    vector<vector<int>> matrix{
      vector<int>{1, 2, 3, 4},
      vector<int>{5, 6, 7, 8},
      vector<int>{9, 10, 11, 12},
    };
    
    // WHEN
    auto result = this->solution.spiralOrder(matrix);

    // THEN
    vector<int> expected{1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7};
    ASSERT_EQ(result, expected);
}

TYPED_TEST_P(SpiralMatrixTestBase, test3)
{
    // GIVEN
    vector<vector<int>> matrix{};
    
    // WHEN
    auto result = this->solution.spiralOrder(matrix);

    // THEN
    vector<int> expected{};
    ASSERT_EQ(result, expected);
}

TYPED_TEST_P(SpiralMatrixTestBase, test4)
{
    // GIVEN
    vector<vector<int>> matrix{
      vector<int>{1, 2},
    };
    
    // WHEN
    auto result = this->solution.spiralOrder(matrix);

    // THEN
    vector<int> expected{1, 2};
    ASSERT_EQ(result, expected);
}