#ifndef REVERSE_LINKED_LIST_II_SOLUTION1_H_
#define REVERSE_LINKED_LIST_II_SOLUTION1_H_

#include "questions/reverselinkedlistii/Solution.hpp"

ListNode* Solution1::reverseBetween(ListNode* head, int left, int right) {
    ListNode dummy;
    dummy.next = head;

    ListNode* start = &dummy;
    for (int i = 0; i < left - 1; i++) {
        start = start->next;
    }

    ListNode* innerStart = start->next; // the original inner start will be the inner tail
    ListNode* last = nullptr; // <---- it doesn't matter, because the inner list will be concatenated again
    ListNode* next = nullptr;
    ListNode* cur = innerStart;
    for (int i = left; i <= right; i++) {
        next = cur->next;
        cur->next = last;
        last = cur;
        cur = next;
    }

    innerStart->next = cur;
    start->next = last;

    return dummy.next; // <------- if whole list are reversed, then the head is changed
}

#endif