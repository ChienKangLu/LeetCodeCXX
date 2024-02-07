#ifndef QUESTIONS_SORT_LIST_SOLUTION_H_
#define QUESTIONS_SORT_LIST_SOLUTION_H_

#include "SortList.hpp"
#include <utility>

using namespace std;

// Leetcode 148. Sort List
class Solution1 : SortList
{
public:
  ListNode* sortList(ListNode* head) override;

private:
  ListNode* getMid(ListNode* head);
  ListNode* merge(ListNode* l1, ListNode* l2);
};

class Solution2 : SortList
{
public:
  ListNode* sortList(ListNode* head) override;

private:
  pair<ListNode*, ListNode*> merge(ListNode* l1, ListNode* l2);
  ListNode* split(ListNode* head, int n);
};

#endif