#include "gtest/gtest.h"
#include "questions/question11/Solution.hpp"

template <typename T>
class Question11TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question11TestBase);

TYPED_TEST_P(Question11TestBase, test1) {
  // GIVEN
  vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

  // WHEN
  int result = this->solution.maxArea(height);

  // THEN
  EXPECT_EQ(result, 49);
}

TYPED_TEST_P(Question11TestBase, test2) {
  // GIVEN
  vector<int> height = {1, 1};

  // WHEN
  int result = this->solution.maxArea(height);

  // THEN
  EXPECT_EQ(result, 1);
}
