#ifndef QUESTIONS_MERGE_TWO_SORTED_LISTS_MERGE_TWO_SORTED_LISTS_H_
#define QUESTIONS_MERGE_TWO_SORTED_LISTS_MERGE_TWO_SORTED_LISTS_H_

#include "../Question.hpp"
#include "../common/ListNode.hpp"

class MergeTwoSortedLists : public Question
{
public:
  virtual ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) = 0;
};

#endif