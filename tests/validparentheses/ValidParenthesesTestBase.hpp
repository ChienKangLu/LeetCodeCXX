#include "gtest/gtest.h"
#include "questions/validparentheses/Solution.hpp"

template <typename T>
class ValidParenthesesTestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(ValidParenthesesTestBase);

TYPED_TEST_P(ValidParenthesesTestBase, test1) {
  // GIVEN
  std::string s = "()";

  // WHEN
  bool isValid = this->solution.isValid(s);

  // THEN
  EXPECT_TRUE(isValid);
}

TYPED_TEST_P(ValidParenthesesTestBase, test2) {
  // GIVEN
  std::string s = "()[]{}";

  // WHEN
  bool isValid = this->solution.isValid(s);

  // THEN
  EXPECT_TRUE(isValid);
}

TYPED_TEST_P(ValidParenthesesTestBase, test3) {
  // GIVEN
  std::string s = "(]";

  // WHEN
  bool isValid = this->solution.isValid(s);

  // THEN
  EXPECT_FALSE(isValid);
}

TYPED_TEST_P(ValidParenthesesTestBase, test4) {
  // GIVEN
  std::string s = "([)]";

  // WHEN
  bool isValid = this->solution.isValid(s);

  // THEN
  EXPECT_FALSE(isValid);
}

TYPED_TEST_P(ValidParenthesesTestBase, test5) {
  // GIVEN
  std::string s = "{[]}";

  // WHEN
  bool isValid = this->solution.isValid(s);

  // THEN
  EXPECT_TRUE(isValid);
}

TYPED_TEST_P(ValidParenthesesTestBase, test6) {
  // GIVEN
  std::string s = "]";

  // WHEN
  bool isValid = this->solution.isValid(s);

  // THEN
  EXPECT_FALSE(isValid);
}

TYPED_TEST_P(ValidParenthesesTestBase, test7) {
  // GIVEN
  std::string s = "(])";

  // WHEN
  bool isValid = this->solution.isValid(s);

  // THEN
  EXPECT_FALSE(isValid);
}