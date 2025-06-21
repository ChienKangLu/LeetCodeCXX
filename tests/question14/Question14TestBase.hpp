#include "gtest/gtest.h"
#include "questions/question14/Solution.hpp"

template <typename T>
class Question14TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question14TestBase);

TYPED_TEST_P(Question14TestBase, test1) {
  // GIVEN
  std::vector<std::string> strs{"flower", "flow", "flight"};

  // WHEN
  const auto result = this->solution.longestCommonPrefix(strs);

  // THEN
  EXPECT_STREQ(result.c_str(), "fl");
}

TYPED_TEST_P(Question14TestBase, test2) {
  // GIVEN
  std::vector<std::string> strs{"dog", "racecar", "car"};

  // WHEN
  const auto result = this->solution.longestCommonPrefix(strs);

  // THEN
  EXPECT_STREQ(result.c_str(), "");
}