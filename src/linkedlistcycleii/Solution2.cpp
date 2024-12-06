#ifndef LINKED_LIST_CYCLE_II_SOLUTION1_H_
#define LINKED_LIST_CYCLE_II_SOLUTION1_H_

#include "questions/linkedlistcycleii/Solution.hpp"
#include <unordered_set>

using namespace std;
/**
 * While find the first intersection (Z), then the length from intersction (Z) to
 * cycle node (Y) is same the length from start (X) to cycle node (Y).
 *
 * Prove:
 *
 * X ----(a)----Y ---
 *              |     \
 *              |      (b)
 *              (c)      \
 *              |          \
 *              |-----------Z
 *
 * length of slow: a + b
 * length of fast: a + b + c + b
 * length of fast = 2 * length of slow
 *
 * a + b + c + b = 2 (a + b)
 * => a = c
 */
ListNode *Solution2::detectCycle(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;

    // find intersection
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            // find cycle
            ListNode *start = head;
            while (start != slow)
            {
                start = start->next;
                slow = slow->next;
            }
            return start;
        }
    }

    return nullptr;
}

#endif