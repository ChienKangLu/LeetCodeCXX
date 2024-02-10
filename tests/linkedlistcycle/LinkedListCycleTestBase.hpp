#include "gtest/gtest.h"
#include "questions/linkedlistcycle/Solution.hpp"
#include "../utils/ListNodeUtils.cpp"

template <typename T>
class LinkedListCycleTestBase : public ::testing::Test 
{
protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
  ListNode *head = nullptr;
};

TYPED_TEST_SUITE_P(LinkedListCycleTestBase);

TYPED_TEST_P(LinkedListCycleTestBase, test1)
{
    // GIVEN
    // 3 (2) 0 -4
    this->head = createList({ 3, 2, 0 });
    ListNode* circleStart = this->head->next; // 2
    ListNode end(-4);
    end.next = circleStart;
    concatinate(this->head, &end);
    
    // WHEN
    bool hasCycle = this->solution.hasCycle(this->head);

    // THEN
    EXPECT_EQ(hasCycle, true);
}

TYPED_TEST_P(LinkedListCycleTestBase, test2)
{
    // GIVEN
    // (1) 2
    this->head = createList({ 1, 2 });
    ListNode* circleStart = this->head; // 1
    ListNode end(2);
    end.next = circleStart;
    concatinate(this->head, &end);
    
    // WHEN
    bool hasCycle = this->solution.hasCycle(this->head);

    // THEN
    EXPECT_EQ(hasCycle, true);
}

TYPED_TEST_P(LinkedListCycleTestBase, test3)
{
    // GIVEN
    this->head = createList({ 1 });
    
    // WHEN
    bool hasCycle = this->solution.hasCycle(this->head);

    // THEN
    EXPECT_EQ(hasCycle, false);
}