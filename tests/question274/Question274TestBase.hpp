#include "gtest/gtest.h"
#include "questions/question274/Solution.hpp"

template <typename T>
class Question274TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question274TestBase);

TYPED_TEST_P(Question274TestBase, test1) {
  // GIVEN
  vector<int> citations{3, 0, 6, 1, 5};

  // WHEN
  const auto result = this->solution.hIndex(citations);

  // THEN
  EXPECT_EQ(3, result);
}

TYPED_TEST_P(Question274TestBase, test2) {
  // GIVEN
  vector<int> citations{1, 3, 1};

  // WHEN
  const auto result = this->solution.hIndex(citations);

  // THEN
  EXPECT_EQ(1, result);
}