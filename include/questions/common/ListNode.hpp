#ifndef QUESTIONS_MERGE_TWO_SORTED_LISTS_LIST_NODE_H_
#define QUESTIONS_MERGE_TWO_SORTED_LISTS_LIST_NODE_H_

/**
 * Definition for singly-linked list.
 */
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

#endif