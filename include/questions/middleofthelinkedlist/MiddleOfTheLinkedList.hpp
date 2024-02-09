#ifndef QUESTIONS_MIDDLE_OF_THE_LINKED_LIST_MIDDLE_OF_THE_LINKED_LIST_H_
#define QUESTIONS_MIDDLE_OF_THE_LINKED_LIST_MIDDLE_OF_THE_LINKED_LIST_H_

#include "../Question.hpp"
#include "../common/ListNode.hpp"

// Leetcode 876. Middle of the Linked List
class MiddleOfTheLinkedList : public Question 
{
public:
  virtual ListNode* middleNode(ListNode* head) = 0;
};

#endif