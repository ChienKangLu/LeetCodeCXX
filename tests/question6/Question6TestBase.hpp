#include "gtest/gtest.h"
#include "questions/question6/Solution.hpp"

template <typename T>
class Question6TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question6TestBase);

TYPED_TEST_P(Question6TestBase, test1) {
  // GIVEN
  std::string input = "PAYPALISHIRING";
  int numRows = 3;

  // WHEN
  std::string result = this->solution.convert(input, numRows);

  // THEN
  std::string expected{"PAHNAPLSIIGYIR"};
  EXPECT_STREQ(expected.c_str(), result.c_str());
}

TYPED_TEST_P(Question6TestBase, test2) {
  // GIVEN
  std::string input = "PAYPALISHIRING";
  int numRows = 4;

  // WHEN
  std::string result = this->solution.convert(input, numRows);

  // THEN
  std::string expected{"PINALSIGYAHRPI"};
  EXPECT_STREQ(expected.c_str(), result.c_str());
}

TYPED_TEST_P(Question6TestBase, test3) {
  // GIVEN
  std::string input = "A";
  int numRows = 1;

  // WHEN
  std::string result = this->solution.convert(input, numRows);

  // THEN
  std::string expected{"A"};
  EXPECT_STREQ(expected.c_str(), result.c_str());
}