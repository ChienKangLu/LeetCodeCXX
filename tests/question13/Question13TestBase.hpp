#include "gtest/gtest.h"
#include "questions/question13/Solution.hpp"

template <typename T>
class Question13TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question13TestBase);

TYPED_TEST_P(Question13TestBase, test1) {
  // GIVEN
  string s{"III"};

  // WHEN
  const auto result = this->solution.romanToInt(s);

  // THEN
  EXPECT_EQ(3, result);
}

TYPED_TEST_P(Question13TestBase, test2) {
  // GIVEN
  string s{"LVIII"};

  // WHEN
  const auto result = this->solution.romanToInt(s);

  // THEN
  EXPECT_EQ(58, result);
}

TYPED_TEST_P(Question13TestBase, test3) {
  // GIVEN
  string s{"MCMXCIV"};

  // WHEN
  const auto result = this->solution.romanToInt(s);

  // THEN
  EXPECT_EQ(1994, result);
}