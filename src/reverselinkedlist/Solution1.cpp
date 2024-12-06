#ifndef REVERSE_LINKED_LIST_SOLUTION1_H_
#define REVERSE_LINKED_LIST_SOLUTION1_H_

#include "questions/reverselinkedlist/Solution.hpp"

ListNode *Solution1::reverseList(ListNode *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }

    ListNode *last = nullptr;
    ListNode *next = nullptr;
    ListNode *cur = head;
    while (cur != nullptr)
    {
        next = cur->next;
        cur->next = last;
        last = cur;
        cur = next;
    }

    return last;
}

#endif