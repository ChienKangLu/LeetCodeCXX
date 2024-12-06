#ifndef QUESTIONS_ODD_EVEN_LINKED_LIST_ODD_EVEN_LINKED_LIST_H_
#define QUESTIONS_ODD_EVEN_LINKED_LIST_ODD_EVEN_LINKED_LIST_H_

#include "../Question.hpp"
#include "../common/ListNode.hpp"

// Leetcode 328. Odd Even Linked List
class OddEvenLinkedList : public Question {
 public:
  virtual ListNode* oddEvenList(ListNode* head) = 0;
};

#endif