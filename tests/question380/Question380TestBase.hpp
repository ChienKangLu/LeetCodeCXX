#include "gtest/gtest.h"
#include "questions/question380/Solution.hpp"

template <typename T>
class Question380TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question380TestBase);

TYPED_TEST_P(Question380TestBase, test1) {
  /**
   *  Input
   *   ["RandomizedSet", "insert", "remove", "insert", "getRandom", "remove",
   *    "insert", "getRandom"]
   *   [[], [1], [2], [2], [], [1], [2], []]
   *   Output
   *   [null, true, false, true, 2, true, false, 2]
   */
  const auto result1 = this->solution.insert(1);
  EXPECT_TRUE(result1);
  const auto result2 = this->solution.remove(2);
  EXPECT_FALSE(result2);
  const auto result3 = this->solution.insert(2);
  EXPECT_TRUE(result3);
  const auto result4 = this->solution.getRandom();
  EXPECT_EQ(2, result4);
  const auto result5 = this->solution.remove(1);
  EXPECT_TRUE(result5);
  const auto result6 = this->solution.insert(2);
  EXPECT_FALSE(result6);
  const auto result7 = this->solution.getRandom();
  EXPECT_EQ(2, result7);
}