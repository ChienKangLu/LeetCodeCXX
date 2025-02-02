#include "gtest/gtest.h"
#include "questions/question135/Solution.hpp"

template <typename T>
class Question135TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question135TestBase);

TYPED_TEST_P(Question135TestBase, test1) {
  // GIVEN
  vector<int> ratings{1, 0, 2};

  // WHEN
  const auto candies = this->solution.candy(ratings);

  // THEN
  EXPECT_EQ(5, candies);
}

TYPED_TEST_P(Question135TestBase, test2) {
  // GIVEN
  vector<int> ratings{1, 2, 2};

  // WHEN
  const auto candies = this->solution.candy(ratings);

  // THEN
  EXPECT_EQ(4, candies);
}