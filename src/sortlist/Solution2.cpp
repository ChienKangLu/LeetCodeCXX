#ifndef SORT_LIST_SOLUTION1_H_
#define SORT_LIST_SOLUTION1_H_

#include "questions/sortlist/Solution.hpp"

ListNode *Solution2::sortList(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }

    int length = 1;
    ListNode *cur = head;
    while ((cur = cur->next))
    {
        length++;
    }

    ListNode dummy;
    dummy.next = head;
    ListNode *left;
    ListNode *right;
    ListNode *tail;

    for (int n = 1; n < length; n <<= 1)
    {
        cur = dummy.next;
        tail = &dummy;
        while (cur != nullptr)
        {
            left = cur;
            right = split(left, n);
            cur = split(right, n);
            auto merged = merge(left, right);
            tail->next = merged.first;
            tail = merged.second;
        }
    }

    return dummy.next;
}

ListNode *Solution2::split(ListNode *head, int n)
{
    while (--n && head != nullptr)
    {
        head = head->next;
    }
    ListNode *rest = head ? head->next : nullptr;
    if (head != nullptr)
    {
        head->next = nullptr;
    }
    return rest;
}

pair<ListNode *, ListNode *> Solution2::merge(ListNode *l1, ListNode *l2)
{
    ListNode dummy;
    ListNode *tail = &dummy;

    while (l1 != nullptr && l2 != nullptr)
    {
        if (l1->val < l2->val)
        {
            tail->next = l1;
            l1 = l1->next;
        }
        else
        {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    if (l1 != nullptr)
    {
        tail->next = l1;
    }
    else if (l2 != nullptr)
    {
        tail->next = l2;
    }

    while (tail->next != nullptr)
    {
        tail = tail->next;
    }

    return {dummy.next, tail};
}

#endif