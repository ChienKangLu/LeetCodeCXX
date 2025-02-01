#include "gtest/gtest.h"
#include "questions/question134/Solution.hpp"

template <typename T>
class Question134TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question134TestBase);

TYPED_TEST_P(Question134TestBase, test1) {
  // GIVEN
  vector<int> gas{1, 2, 3, 4, 5};
  vector<int> cost{3, 4, 5, 1, 2};

  // WHEN
  const auto startingStation = this->solution.canCompleteCircuit(gas, cost);

  // THEN
  EXPECT_EQ(3, startingStation);
}

TYPED_TEST_P(Question134TestBase, test2) {
  // GIVEN
  vector<int> gas{2, 3, 4};
  vector<int> cost{3, 4, 3};

  // WHEN
  const auto startingStation = this->solution.canCompleteCircuit(gas, cost);

  // THEN
  EXPECT_EQ(-1, startingStation);
}
