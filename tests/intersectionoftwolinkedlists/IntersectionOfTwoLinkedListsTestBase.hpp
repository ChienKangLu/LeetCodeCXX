#include "gtest/gtest.h"
#include "questions/intersectionoftwolinkedlists/Solution.hpp"
#include "../utils/ListNodeUtils.cpp"

template <typename T>
class IntersectionOfTwoLinkedListsTestBase : public ::testing::Test 
{
protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
  ListNode *headA = nullptr;
  ListNode *headB = nullptr;
};

TYPED_TEST_SUITE_P(IntersectionOfTwoLinkedListsTestBase);

TYPED_TEST_P(IntersectionOfTwoLinkedListsTestBase, test1)
{
    // GIVEN
    // 4 1 (8 4 5)
    this->headA = createList({ 4, 1 });
    ListNode * common = createList({ 8, 4, 5 });
    concatinate(this->headA, common);

    // 5 6 1 (8 4 5)
    this->headB = createList({ 5, 6, 1 });
    concatinate(this->headB, common);

    // WHEN
    ListNode *intersection = this->solution.getIntersectionNode(this->headA, this->headB);

    // THEN
    EXPECT_EQ(intersection, common);
}

TYPED_TEST_P(IntersectionOfTwoLinkedListsTestBase, test2)
{
    // GIVEN
    // 1 9 1 (2 4)
    this->headA = createList({ 1, 9, 1 });
    ListNode * common = createList({ 2, 4 });
    concatinate(this->headA, common);

    // 3 (2 4)
    this->headB = createList({ 3 });
    concatinate(this->headB, common);

    // WHEN
    ListNode *intersection = this->solution.getIntersectionNode(this->headA, this->headB);

    // THEN
    EXPECT_EQ(intersection, common);
}

TYPED_TEST_P(IntersectionOfTwoLinkedListsTestBase, test3)
{
    // GIVEN
    // 2 6 4
    this->headA = createList({ 2, 6, 4 });

    // 1 5
    this->headB = createList({ 1, 5 });

    // WHEN
    ListNode *intersection = this->solution.getIntersectionNode(this->headA, this->headB);

    // THEN
    EXPECT_EQ(intersection, nullptr);
}

TYPED_TEST_P(IntersectionOfTwoLinkedListsTestBase, test4)
{
    // GIVEN
    // (1 2 3 4)
    ListNode * common = createList({ 1, 2, 3, 4 });
    this->headA = common;

    // (1 2 3 4)
    this->headB = common;

    // WHEN
    ListNode *intersection = this->solution.getIntersectionNode(this->headA, this->headB);

    // THEN
    EXPECT_EQ(intersection, common);
}