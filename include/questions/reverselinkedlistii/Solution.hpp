#ifndef QUESTIONS_REVERSE_LINKED_LIST_II_SOLUTION_H_
#define QUESTIONS_REVERSE_LINKED_LIST_II_SOLUTION_H_

#include "ReverseLinkedListII.hpp"

class Solution1 : ReverseLinkedListII
{
public:
  ListNode* reverseBetween(ListNode* head, int left, int right) override;
};

#endif