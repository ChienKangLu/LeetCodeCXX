#ifndef SORT_LIST_SOLUTION1_H_
#define SORT_LIST_SOLUTION1_H_

#include "questions/sortlist/Solution.hpp"

ListNode* Solution1::sortList(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    ListNode* left = head;
    ListNode* right = getMid(head);

    ListNode* temp = right->next;
    right->next = nullptr;
    right = temp;

    left = sortList(left);
    right = sortList(right);

    return merge(left, right);
}

ListNode* Solution1::getMid(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head->next;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

ListNode* Solution1::merge(ListNode* l1, ListNode* l2) {
    ListNode dummy;
    ListNode* tail = &dummy;

    while (l1 != nullptr && l2 != nullptr) {
        if (l1->val < l2->val) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    if (l1 != nullptr) {
        tail->next = l1;
    } else if (l2 != nullptr) {
        tail->next = l2;
    }

    return dummy.next;
}

#endif