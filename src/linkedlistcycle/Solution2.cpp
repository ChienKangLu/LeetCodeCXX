#ifndef LINKED_LIST_CYCLE_SOLUTION1_H_
#define LINKED_LIST_CYCLE_SOLUTION1_H_

#include "questions/linkedlistcycle/Solution.hpp"

bool Solution2::hasCycle(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }

    return false;
}

#endif