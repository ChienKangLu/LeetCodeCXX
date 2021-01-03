#include "gtest/gtest.h"
#include "questions/validparentheses/Solution.hpp"

class ValidParenthesesTest : public ::testing::Test 
{
protected:
  void SetUp() override {}

  void TearDown() override {}

  Solution soluion;
};

TEST_F(ValidParenthesesTest, test1)
{
  EXPECT_TRUE(soluion.isValid("()"));
}

TEST_F(ValidParenthesesTest, test2)
{
  EXPECT_TRUE(soluion.isValid("()[]{}"));
}

TEST_F(ValidParenthesesTest, test3)
{
  EXPECT_FALSE(soluion.isValid("(]"));
}

TEST_F(ValidParenthesesTest, test4)
{
  EXPECT_FALSE(soluion.isValid("([)]"));
}

TEST_F(ValidParenthesesTest, test5)
{
  EXPECT_TRUE(soluion.isValid("{[]}"));
}

TEST_F(ValidParenthesesTest, test6)
{
  EXPECT_FALSE(soluion.isValid("]"));
}

TEST_F(ValidParenthesesTest, test7)
{
  EXPECT_FALSE(soluion.isValid("(])"));
}