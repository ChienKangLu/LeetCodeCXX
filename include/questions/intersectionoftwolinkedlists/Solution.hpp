#ifndef QUESTIONS_INTERSECTION_OF_TWO_LINKED_LISTS_SOLUTION_H_
#define QUESTIONS_INTERSECTION_OF_TWO_LINKED_LISTS_SOLUTION_H_

#include "IntersectionOfTwoLinkedLists.hpp"

class Solution1 : IntersectionOfTwoLinkedLists
{
public:
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) override;
};

#endif