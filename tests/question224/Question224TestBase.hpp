#include "gtest/gtest.h"
#include "questions/question224/Solution.hpp"

template <typename T>
class Question224TestBase : public ::testing::Test 
{
protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question224TestBase);

TYPED_TEST_P(Question224TestBase, test1)
{
    // GIVEN
    string s{"1 + 1"};
    
    // WHEN
    auto result = this->solution.calculate(s);

    // THEN
    ASSERT_EQ(2, result);
}

TYPED_TEST_P(Question224TestBase, test2)
{
    // GIVEN
    string s{" 2-1 + 2 "};
    
    // WHEN
    auto result = this->solution.calculate(s);

    // THEN
    ASSERT_EQ(3, result);
}

TYPED_TEST_P(Question224TestBase, test3)
{
    // GIVEN
    string s{"(1+(4+5+2)-3)+(6+8)"};
    
    // WHEN
    auto result = this->solution.calculate(s);

    // THEN
    ASSERT_EQ(23, result);
}

TYPED_TEST_P(Question224TestBase, test4)
{
    // GIVEN
    string s{"-((1+(4+5+2)-3)+(6+8))"};
    
    // WHEN
    auto result = this->solution.calculate(s);

    // THEN
    ASSERT_EQ(-23, result);
}

TYPED_TEST_P(Question224TestBase, test5)
{
    // GIVEN
    string s{"-1"};
    
    // WHEN
    auto result = this->solution.calculate(s);

    // THEN
    ASSERT_EQ(-1, result);
}

TYPED_TEST_P(Question224TestBase, test6)
{
    // GIVEN
    string s{"1-(     -2)"};
    
    // WHEN
    auto result = this->solution.calculate(s);

    // THEN
    ASSERT_EQ(3, result);
}