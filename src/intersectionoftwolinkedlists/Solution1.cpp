#ifndef INTERSECTION_OF_TWO_LINKED_LISTS_SOLUTION1_H_
#define INTERSECTION_OF_TWO_LINKED_LISTS_SOLUTION1_H_

#include "questions/intersectionoftwolinkedlists/Solution.hpp"

ListNode *Solution1::getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode* a = headA;
    ListNode* b = headB;
    while (a != b) {
        a = a != nullptr ? a->next : headB;
        b = b != nullptr ? b->next : headA;
    }
    return a;
}

#endif