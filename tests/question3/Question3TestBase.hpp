#include "gtest/gtest.h"
#include "questions/question3/Solution.hpp"

template <typename T>
class Question3TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question3TestBase);

TYPED_TEST_P(Question3TestBase, test1) {
  // GIVEN
  string input{"abcabcbb"};

  // WHEN
  int result = this->solution.lengthOfLongestSubstring(input);

  // THEN
  EXPECT_EQ(result, 3);
}

TYPED_TEST_P(Question3TestBase, test2) {
  // GIVEN
  string input{"bbbbb"};

  // WHEN
  int result = this->solution.lengthOfLongestSubstring(input);

  // THEN
  EXPECT_EQ(result, 1);
}

TYPED_TEST_P(Question3TestBase, test3) {
  // GIVEN
  string input{"pwwkew"};

  // WHEN
  int result = this->solution.lengthOfLongestSubstring(input);

  // THEN
  EXPECT_EQ(result, 3);
}

TYPED_TEST_P(Question3TestBase, test4) {
  // GIVEN
  string input{"abba"};

  // WHEN
  int result = this->solution.lengthOfLongestSubstring(input);

  // THEN
  EXPECT_EQ(result, 2);
}