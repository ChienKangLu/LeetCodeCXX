#ifndef LINKED_LIST_CYCLE_II_SOLUTION1_H_
#define LINKED_LIST_CYCLE_II_SOLUTION1_H_

#include "questions/linkedlistcycleii/Solution.hpp"
#include <unordered_set>

using namespace std;

ListNode *Solution1::detectCycle(ListNode *head) {
    unordered_set<ListNode *> visited;
    while (head != nullptr) {
        if (visited.count(head) > 0) {
            return head;
        }
        visited.insert(head);
        head = head->next;
    }
    return nullptr;
}

#endif