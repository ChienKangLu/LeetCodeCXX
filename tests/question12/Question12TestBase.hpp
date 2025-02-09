#include "gtest/gtest.h"
#include "questions/question12/Solution.hpp"

template <typename T>
class Question12TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question12TestBase);

TYPED_TEST_P(Question12TestBase, test1) {
  // GIVEN
  const int num = 58;

  // WHEN
  const auto result = this->solution.intToRoman(num);

  // THEN
  EXPECT_STREQ("LVIII", result.c_str());
}

TYPED_TEST_P(Question12TestBase, test2) {
  // GIVEN
  const int num = 1994;

  // WHEN
  const auto result = this->solution.intToRoman(num);

  // THEN
  EXPECT_STREQ("MCMXCIV", result.c_str());
}

TYPED_TEST_P(Question12TestBase, test3) {
  // GIVEN
  const int num = 3749;

  // WHEN
  const auto result = this->solution.intToRoman(num);

  // THEN
  EXPECT_STREQ("MMMDCCXLIX", result.c_str());
}