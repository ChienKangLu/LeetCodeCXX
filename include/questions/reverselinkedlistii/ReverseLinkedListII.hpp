#ifndef QUESTIONS_REVERSE_LINKED_LIST_II_REVERSE_LINKED_LIST_II_H_
#define QUESTIONS_REVERSE_LINKED_LIST_II_REVERSE_LINKED_LIST_II_H_

#include "../Question.hpp"
#include "../common/ListNode.hpp"

// Leetcode 92. Reverse Linked List II
class ReverseLinkedListII : public Question {
 public:
  virtual ListNode* reverseBetween(ListNode* head, int left, int right) = 0;
};

#endif