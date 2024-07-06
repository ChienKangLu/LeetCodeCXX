#include "gtest/gtest.h"
#include "questions/question150/Solution.hpp"

template <typename T>
class Question150TestBase : public ::testing::Test 
{
protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(Question150TestBase);

TYPED_TEST_P(Question150TestBase, test1)
{
    // GIVEN
    vector<string> tokens{"2", "1", "+", "3", "*"};
    
    // WHEN
    auto result = this->solution.evalRPN(tokens);

    // THEN
    ASSERT_EQ(9, result);
}

TYPED_TEST_P(Question150TestBase, test2)
{
    // GIVEN
    vector<string> tokens{"4", "13", "5", "/", "+"};
    
    // WHEN
    auto result = this->solution.evalRPN(tokens);

    // THEN
    ASSERT_EQ(6, result);
}

TYPED_TEST_P(Question150TestBase, test3)
{
    // GIVEN
    vector<string> tokens{"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    
    // WHEN
    auto result = this->solution.evalRPN(tokens);

    // THEN
    ASSERT_EQ(22, result);
}