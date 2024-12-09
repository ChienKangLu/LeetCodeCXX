#include "gtest/gtest.h"
#include "questions/question121/Solution.hpp"

template <typename T>
class Question121TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question121TestBase);

TYPED_TEST_P(Question121TestBase, test1) {
  // GIVEN
  vector<int> prices{7, 1, 5, 3, 6, 4};

  // WHEN
  const auto result = this->solution.maxProfit(prices);

  // THEN
  EXPECT_EQ(5, result);
}

TYPED_TEST_P(Question121TestBase, test2) {
  // GIVEN
  vector<int> prices{7, 6, 4, 3, 1};

  // WHEN
  const auto result = this->solution.maxProfit(prices);

  // THEN
  EXPECT_EQ(0, result);
}