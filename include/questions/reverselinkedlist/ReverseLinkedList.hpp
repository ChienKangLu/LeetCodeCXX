#ifndef QUESTIONS_REVERSE_LINKED_LIST_REVERSE_LINKED_LIST_H_
#define QUESTIONS_REVERSE_LINKED_LIST_REVERSE_LINKED_LIST_H_

#include "../Question.hpp"
#include "../common/ListNode.hpp"

// Leetcode 206. Reverse Linked List
class ReverseLinkedList : public Question {
 public:
  virtual ListNode* reverseList(ListNode* head) = 0;
};

#endif