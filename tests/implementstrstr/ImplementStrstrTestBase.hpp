#include "gtest/gtest.h"
#include "questions/implementstrstr/Solution.hpp"

template <typename T>
class ImplementStrstrTestBase : public ::testing::Test 
{
protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
  std::string haystack;
  std::string needle; 
};

TYPED_TEST_SUITE_P(ImplementStrstrTestBase);

TYPED_TEST_P(ImplementStrstrTestBase, test1)
{
    // GIVEN
    this->haystack = "abcde";
    this->needle = "ab";
    
    // WHEN
    int index = this->solution.strStr(this->haystack, this->needle);

    // THEN
    ASSERT_EQ(0, index);
}

TYPED_TEST_P(ImplementStrstrTestBase, test2)
{
    // GIVEN
    this->haystack = "hello";
    this->needle = "ll";
    
    // WHEN
    int index = this->solution.strStr(this->haystack, this->needle);

    // THEN
    ASSERT_EQ(2, index);
}

TYPED_TEST_P(ImplementStrstrTestBase, test3)
{
    // GIVEN
    this->haystack = "aaaaa";
    this->needle = "bba";
    
    // WHEN
    int index = this->solution.strStr(this->haystack, this->needle);

    // THEN
    ASSERT_EQ(-1, index);
}

TYPED_TEST_P(ImplementStrstrTestBase, test4)
{
    // GIVEN
    this->haystack = "";
    this->needle = "";
    
    // WHEN
    int index = this->solution.strStr(this->haystack, this->needle);

    // THEN
    ASSERT_EQ(0, index);
}

TYPED_TEST_P(ImplementStrstrTestBase, test5)
{
    // GIVEN
    this->haystack = "mississippi";
    this->needle = "issip";
    
    // WHEN
    int index = this->solution.strStr(this->haystack, this->needle);

    // THEN
    ASSERT_EQ(4, index);
}

TYPED_TEST_P(ImplementStrstrTestBase, test6)
{
    // GIVEN
    this->haystack = "defgidefg";
    this->needle = "defgh";
    
    // WHEN
    int index = this->solution.strStr(this->haystack, this->needle);

    // THEN
    ASSERT_EQ(-1, index);
}

