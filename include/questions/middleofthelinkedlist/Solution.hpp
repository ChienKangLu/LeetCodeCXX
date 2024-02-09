#ifndef QUESTIONS_MIDDLE_OF_THE_LINKED_LIST_SOLUTION_H_
#define QUESTIONS_MIDDLE_OF_THE_LINKED_LIST_SOLUTION_H_

#include "MiddleOfTheLinkedList.hpp"

class Solution1 : MiddleOfTheLinkedList
{
public:
  ListNode* middleNode(ListNode* head) override;
};

#endif