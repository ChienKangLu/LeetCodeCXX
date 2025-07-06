#include "gtest/gtest.h"
#include "questions/question28/Solution.hpp"

template <typename T>
class Question28TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question28TestBase);

TYPED_TEST_P(Question28TestBase, test1) {
  // GIVEN
  string haystack{"sadbutsad"};
  string needle{"sad"};

  // WHEN
  const auto result = this->solution.strStr(haystack, needle);

  // THEN
  EXPECT_EQ(0, result);
}

TYPED_TEST_P(Question28TestBase, test2) {
  // GIVEN
  string haystack{"leetcode"};
  string needle{"leeto"};

  // WHEN
  const auto result = this->solution.strStr(haystack, needle);

  // THEN
  EXPECT_EQ(-1, result);
}

TYPED_TEST_P(Question28TestBase, test3) {
  // GIVEN
  string haystack{"mississippi"};
  string needle{"issip"};

  // WHEN
  const auto result = this->solution.strStr(haystack, needle);

  // THEN
  EXPECT_EQ(4, result);
}

TYPED_TEST_P(Question28TestBase, test4) {
  // GIVEN
  string haystack{"a"};
  string needle{"a"};

  // WHEN
  const auto result = this->solution.strStr(haystack, needle);

  // THEN
  EXPECT_EQ(0, result);
}
