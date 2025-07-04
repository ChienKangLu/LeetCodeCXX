#include "gtest/gtest.h"
#include "questions/question151/Solution.hpp"

template <typename T>
class Question151TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question151TestBase);

TYPED_TEST_P(Question151TestBase, test1) {
  // GIVEN
  std::string s{"the sky is blue"};

  // WHEN
  std::string result = this->solution.reverseWords(s);

  // THEN
  EXPECT_STREQ("blue is sky the", result.c_str());
}

TYPED_TEST_P(Question151TestBase, test2) {
  // GIVEN
  std::string s{"  hello world  "};

  // WHEN
  std::string result = this->solution.reverseWords(s);

  // THEN
  EXPECT_STREQ("world hello", result.c_str());
}

TYPED_TEST_P(Question151TestBase, test3) {
  // GIVEN
  std::string s{"a good   example"};

  // WHEN
  std::string result = this->solution.reverseWords(s);

  // THEN
  EXPECT_STREQ("example good a", result.c_str());
}

TYPED_TEST_P(Question151TestBase, test4) {
  // GIVEN
  std::string s{"good"};

  // WHEN
  std::string result = this->solution.reverseWords(s);

  // THEN
  EXPECT_STREQ("good", result.c_str());
}

TYPED_TEST_P(Question151TestBase, test5) {
  // GIVEN
  std::string s{"   good    "};

  // WHEN
  std::string result = this->solution.reverseWords(s);

  // THEN
  EXPECT_STREQ("good", result.c_str());
}