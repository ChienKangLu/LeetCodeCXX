#ifndef QUESTIONS_LINKED_LIST_CYCLE_LINKED_LIST_CYCLE_H_
#define QUESTIONS_LINKED_LIST_CYCLE_LINKED_LIST_CYCLE_H_

#include "../Question.hpp"
#include "../common/ListNode.hpp"

// Leetcode 141. Linked List Cycle
class LinkedListCycle : public Question {
 public:
  virtual bool hasCycle(ListNode *head) = 0;
};

#endif