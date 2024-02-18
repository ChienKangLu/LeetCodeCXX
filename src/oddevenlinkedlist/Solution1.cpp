#ifndef ODD_EVEN_LINKED_LIST_SOLUTION1_H_
#define ODD_EVEN_LINKED_LIST_SOLUTION1_H_

#include "questions/oddevenlinkedlist/Solution.hpp"
#include <iostream>

ListNode* Solution1::oddEvenList(ListNode* head) {
    if (head == nullptr) {
        return nullptr;
    }

    ListNode evenDummyHead;
    ListNode* evenP = &evenDummyHead;
    ListNode oddDummyHead;
    ListNode* oddP = &oddDummyHead;
    ListNode* p = head;
    int i = 0;
    while (p != nullptr) {
        if (i % 2 == 0) { // even
            evenP->next = p;
            evenP = evenP->next;
        } else { // odd
            oddP->next = p;
            oddP = oddP->next;
        }
        p = p->next;
        i++;
    }
    evenP->next = oddDummyHead.next;
    oddP->next = nullptr;

    return evenDummyHead.next;
}

#endif