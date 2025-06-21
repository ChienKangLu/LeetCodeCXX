#include "gtest/gtest.h"
#include "questions/question58/Solution.hpp"

template <typename T>
class Question58TestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question58TestBase);

TYPED_TEST_P(Question58TestBase, test1) {
  // GIVEN
  std::string s{"Hello World"};

  // WHEN
  const auto result = this->solution.lengthOfLastWord(s);

  // THEN
  EXPECT_EQ(result, 5);
}

TYPED_TEST_P(Question58TestBase, test2) {
  // GIVEN
  std::string s{"   fly me   to   the moon  "};

  // WHEN
  const auto result = this->solution.lengthOfLastWord(s);

  // THEN
  EXPECT_EQ(result, 4);
}

TYPED_TEST_P(Question58TestBase, test3) {
  // GIVEN
  std::string s{"luffy is still joyboy"};

  // WHEN
  const auto result = this->solution.lengthOfLastWord(s);

  // THEN
  EXPECT_EQ(result, 6);
}