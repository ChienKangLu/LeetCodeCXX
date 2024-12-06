#ifndef QUESTIONS_LINKED_LIST_CYCLE_II_LINKED_LIST_CYCLE_II_H_
#define QUESTIONS_LINKED_LIST_CYCLE_II_LINKED_LIST_CYCLE_II_H_

#include "../Question.hpp"
#include "../common/ListNode.hpp"

// Leetcode 142. Linked List Cycle II
class LinkedListCycleII : public Question {
 public:
  virtual ListNode *detectCycle(ListNode *head) = 0;
};

#endif