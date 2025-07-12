#include "gtest/gtest.h"
#include "questions/question125/Solution.hpp"

template <typename T>
class Question125TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question125TestBase);

TYPED_TEST_P(Question125TestBase, test1) {
  // GIVEN
  string s{"A man, a plan, a canal: Panama"};

  // WHEN
  bool result = this->solution.isPalindrome(s);

  // THEN
  EXPECT_TRUE(result);
}

TYPED_TEST_P(Question125TestBase, test2) {
  // GIVEN
  string s{"race a car"};

  // WHEN
  bool result = this->solution.isPalindrome(s);

  // THEN
  EXPECT_FALSE(result);
}

TYPED_TEST_P(Question125TestBase, test3) {
  // GIVEN
  string s{"0P"};

  // WHEN
  bool result = this->solution.isPalindrome(s);

  // THEN
  EXPECT_FALSE(result);
}
