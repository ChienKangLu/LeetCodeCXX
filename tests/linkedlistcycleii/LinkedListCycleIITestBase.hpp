#include "gtest/gtest.h"
#include "questions/linkedlistcycleii/Solution.hpp"
#include "../utils/ListNodeUtils.cpp"

template <typename T>
class LinkedListCycleIITestBase : public ::testing::Test 
{
protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
  ListNode *head = nullptr;
};

TYPED_TEST_SUITE_P(LinkedListCycleIITestBase);

TYPED_TEST_P(LinkedListCycleIITestBase, test1)
{
    // GIVEN
    // 3 (2) 0 -4
    this->head = createList({ 3, 2, 0 });
    ListNode* circleStart = this->head->next; // 2
    ListNode end(-4);
    end.next = circleStart;
    concatinate(this->head, &end);
    
    // WHEN
    ListNode * cycle = this->solution.detectCycle(this->head);

    // THEN
    EXPECT_EQ(cycle, circleStart);
}

TYPED_TEST_P(LinkedListCycleIITestBase, test2)
{
    // GIVEN
    // (1) 2
    this->head = createList({ 1, 2 });
    ListNode* circleStart = this->head; // 1
    ListNode end(2);
    end.next = circleStart;
    concatinate(this->head, &end);
    
    // WHEN
    ListNode * cycle = this->solution.detectCycle(this->head);

    // THEN
    EXPECT_EQ(cycle, circleStart);
}

TYPED_TEST_P(LinkedListCycleIITestBase, test3)
{
    // GIVEN
    this->head = createList({ 1 });
    
    // WHEN
    ListNode * cycle = this->solution.detectCycle(this->head);

    // THEN
    EXPECT_EQ(cycle, nullptr);
}