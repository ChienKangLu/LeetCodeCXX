#include "gtest/gtest.h"
#include "questions/question392/Solution.hpp"

template <typename T>
class Question392TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question392TestBase);

TYPED_TEST_P(Question392TestBase, test1) {
  // GIVEN
  string s{"abc"};
  string t{"ahbgdc"};

  // WHEN
  bool result = this->solution.isSubsequence(s, t);

  // THEN
  EXPECT_TRUE(result);
}

TYPED_TEST_P(Question392TestBase, test2) {
  // GIVEN
  string s{"axc"};
  string t{"ahbgdc"};

  // WHEN
  bool result = this->solution.isSubsequence(s, t);

  // THEN
  EXPECT_FALSE(result);
}

TYPED_TEST_P(Question392TestBase, test3) {
  // GIVEN
  string s{""};
  string t{"ahbgdc"};

  // WHEN
  bool result = this->solution.isSubsequence(s, t);

  // THEN
  EXPECT_TRUE(result);
}
