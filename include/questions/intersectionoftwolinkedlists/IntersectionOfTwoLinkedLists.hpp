#ifndef QUESTIONS_INTERSECTION_OF_TWO_LINKED_LISTS_INTERSECTION_OF_TWO_LINKED_LISTS_H_
#define QUESTIONS_INTERSECTION_OF_TWO_LINKED_LISTS_INTERSECTION_OF_TWO_LINKED_LISTS_H_

#include "../Question.hpp"
#include "../common/ListNode.hpp"

// Leetcode 160. Intersection of Two Linked Lists
class IntersectionOfTwoLinkedLists : public Question 
{
public:
  virtual ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) = 0;
};

#endif