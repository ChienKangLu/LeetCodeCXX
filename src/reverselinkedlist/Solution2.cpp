#ifndef REVERSE_LINKED_LIST_SOLUTION1_H_
#define REVERSE_LINKED_LIST_SOLUTION1_H_

#include "questions/reverselinkedlist/Solution.hpp"

ListNode* Solution2::reverseList(ListNode* head) {
    if (head == nullptr) {
        return nullptr;
    }
    
    ListNode* newHead;
    if (head->next != nullptr) {
        newHead = reverseList(head->next);
        head->next->next = head;
    } else {
        newHead = head;
    }
    head->next = nullptr;
    return newHead;
}

#endif