#include "gtest/gtest.h"
#include "questions/middleofthelinkedlist/Solution.hpp"
#include "../utils/ListNodeUtils.cpp"

template <typename T>
class MiddleOfTheLinkedListTestBase : public ::testing::Test 
{
protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
  ListNode *head = nullptr;
};

TYPED_TEST_SUITE_P(MiddleOfTheLinkedListTestBase);

TYPED_TEST_P(MiddleOfTheLinkedListTestBase, test1)
{
    // GIVEN
    this->head = createList({ 1, 2, 3, 4 });
    
    // WHEN
    ListNode *result = this->solution.middleNode(this->head);

    // THEN
    EXPECT_EQ(result->val, 3);
}

TYPED_TEST_P(MiddleOfTheLinkedListTestBase, test2)
{
    // GIVEN
    this->head = createList({ 1, 2, 3, 4, 5, 6});
    
    // WHEN
    ListNode *result = this->solution.middleNode(this->head);

    // THEN
    EXPECT_EQ(result->val, 4);
}

TYPED_TEST_P(MiddleOfTheLinkedListTestBase, test3)
{
    // GIVEN
    this->head = createList({ 1});
    
    // WHEN
    ListNode *result = this->solution.middleNode(this->head);

    // THEN
    EXPECT_EQ(result->val, 1);
}