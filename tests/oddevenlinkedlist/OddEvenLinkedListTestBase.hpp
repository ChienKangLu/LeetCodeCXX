#include "gtest/gtest.h"
#include "questions/oddevenlinkedlist/Solution.hpp"
#include "../utils/ListNodeUtils.cpp"

template <typename T>
class OddEvenLinkedListTestBase : public ::testing::Test 
{
protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
  ListNode *head = nullptr;
};

TYPED_TEST_SUITE_P(OddEvenLinkedListTestBase);

TYPED_TEST_P(OddEvenLinkedListTestBase, test1)
{
    // GIVEN
    this->head = createList({ 1, 2, 3, 4, 5 });
    
    // WHEN
    ListNode* result = this->solution.oddEvenList(this->head);
    const std::string resultString = *ListToString(result);

    // // THEN
    EXPECT_STREQ("[1 3 5 2 4]", resultString.c_str());
}

TYPED_TEST_P(OddEvenLinkedListTestBase, test2)
{
    // GIVEN
    this->head = createList({ 2, 1, 3, 5, 6, 4, 7 });
    
    // WHEN
    ListNode* result = this->solution.oddEvenList(this->head);
    const std::string resultString = *ListToString(result);

    // // THEN
    EXPECT_STREQ("[2 3 6 7 1 5 4]", resultString.c_str());
}

TYPED_TEST_P(OddEvenLinkedListTestBase, test3)
{
    // GIVEN
    this->head = createList({ 2 });
    
    // WHEN
    ListNode* result = this->solution.oddEvenList(this->head);
    const std::string resultString = *ListToString(result);

    // // THEN
    EXPECT_STREQ("[2]", resultString.c_str());
}

TYPED_TEST_P(OddEvenLinkedListTestBase, test4)
{
    // GIVEN
    this->head = createList({});
    
    // WHEN
    ListNode* result = this->solution.oddEvenList(this->head);
    const std::string resultString = *ListToString(result);

    // // THEN
    EXPECT_STREQ("[]", resultString.c_str());
}