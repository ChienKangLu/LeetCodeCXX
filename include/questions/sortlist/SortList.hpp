#ifndef QUESTIONS_SORT_LIST_SORT_LIST_H_
#define QUESTIONS_SORT_LIST_SORT_LIST_H_

#include "../Question.hpp"
#include "../common/ListNode.hpp"

class SortList : public Question {
 public:
  virtual ListNode* sortList(ListNode* head) = 0;
};

#endif