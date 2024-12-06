#ifndef MERGE_TWO_SORTED_LISTS_SOLUTION1_H_
#define MERGE_TWO_SORTED_LISTS_SOLUTION1_H_

#include "questions/mergetwosortedlists/Solution.hpp"

void insertHead(ListNode *&l2_node, ListNode *&l1_head);

void insertTail(ListNode *&l2_node, ListNode *&l1_tail);

void insert(ListNode *&l2_node, ListNode *&l1_node1);

ListNode *Solution1::mergeTwoLists(ListNode *l1, ListNode *l2)
{
    if (l1 == nullptr && l2 == nullptr)
    {
        return nullptr;
    }
    else if (l1 != nullptr && l2 == nullptr)
    {
        return l1;
    }
    else if (l1 == nullptr && l2 != nullptr)
    {
        return l2;
    }

    ListNode *l1_head = l1;
    ListNode *l1_ptr = l1_head;
    ListNode *l2_head = l2;
    ListNode *l2_ptr = l2_head;
    while (l2_ptr != nullptr)
    {
        while (l1_ptr != nullptr)
        {
            if (l1_ptr == l1_head && l2_ptr->val <= l1_ptr->val)
            {
                l2_head = l2_head->next;
                insertHead(l2_ptr, l1_head);
                break;
            }
            else if (l2_ptr->val >= l1_ptr->val)
            {
                if (l1_ptr->next == nullptr)
                {
                    l2_head = l2_head->next;
                    insertTail(l2_ptr, l1_ptr);
                    break;
                }
                else if (l2_ptr->val <= l1_ptr->next->val)
                {
                    l2_head = l2_head->next;
                    insert(l2_ptr, l1_ptr);
                    break;
                }
            }
            l1_ptr = l1_ptr->next;
        }
        l1_ptr = l2_ptr;
        l2_ptr = l2_head;
    }
    return l1_head;
}

void insertHead(ListNode *&l2_node, ListNode *&l1_head)
{
    l2_node->next = l1_head;
    l1_head = l2_node;
}

void insertTail(ListNode *&l2_node, ListNode *&l1_tail)
{
    l1_tail->next = l2_node;
    l2_node->next = nullptr;
}

void insert(ListNode *&l2_node, ListNode *&l1_node1)
{
    ListNode *temp = l1_node1->next;
    l1_node1->next = l2_node;
    l2_node->next = temp;
}

#endif