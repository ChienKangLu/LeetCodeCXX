#ifndef LINKED_LIST_CYCLE_SOLUTION1_H_
#define LINKED_LIST_CYCLE_SOLUTION1_H_

#include <unordered_set>

#include "questions/linkedlistcycle/Solution.hpp"

using namespace std;

bool Solution1::hasCycle(ListNode *head) {
  unordered_set<ListNode *> visited;
  while (head != nullptr) {
    if (visited.count(head) > 0) {
      return true;
    }
    visited.insert(head);
    head = head->next;
  }
  return false;
}

#endif