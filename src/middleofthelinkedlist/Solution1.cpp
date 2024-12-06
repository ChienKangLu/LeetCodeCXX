#ifndef MIDDLE_OF_THE_LINKED_LIST_SOLUTION1_H_
#define MIDDLE_OF_THE_LINKED_LIST_SOLUTION1_H_

#include "questions/middleofthelinkedlist/Solution.hpp"

ListNode *Solution1::middleNode(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head; // find the second middle

    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

#endif