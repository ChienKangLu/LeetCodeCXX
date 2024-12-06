#include "gtest/gtest.h"
#include "questions/question227/Solution.hpp"

template <typename T>
class Question227TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question227TestBase);

TYPED_TEST_P(Question227TestBase, test1) {
  // GIVEN
  string s{"3+2*2"};

  // WHEN
  auto result = this->solution.calculate(s);

  // THEN
  ASSERT_EQ(7, result);
}

TYPED_TEST_P(Question227TestBase, test2) {
  // GIVEN
  string s{" 3/2 "};

  // WHEN
  auto result = this->solution.calculate(s);

  // THEN
  ASSERT_EQ(1, result);
}

TYPED_TEST_P(Question227TestBase, test3) {
  // GIVEN
  string s{" 3+5 / 2 "};

  // WHEN
  auto result = this->solution.calculate(s);

  // THEN
  ASSERT_EQ(5, result);
}

TYPED_TEST_P(Question227TestBase, test4) {
  // GIVEN
  string s{" 3/5 + 2 "};

  // WHEN
  auto result = this->solution.calculate(s);

  // THEN
  ASSERT_EQ(2, result);
}

TYPED_TEST_P(Question227TestBase, test5) {
  // GIVEN
  string s{"2147483647"};

  // WHEN
  auto result = this->solution.calculate(s);

  // THEN
  ASSERT_EQ(2147483647, result);
}

TYPED_TEST_P(Question227TestBase, test6) {
  // GIVEN
  string s{"14/3*2"};

  // WHEN
  auto result = this->solution.calculate(s);

  // THEN
  ASSERT_EQ(8, result);
}

TYPED_TEST_P(Question227TestBase, test7) {
  // GIVEN
  string s{"1*2-3/4+5*6-7*8+9/10"};

  // WHEN
  auto result = this->solution.calculate(s);

  // THEN
  ASSERT_EQ(-24, result);
}
