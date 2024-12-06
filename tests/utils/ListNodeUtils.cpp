#ifndef UTILS_H
#define UTILS_H

#include <iterator>
#include <string>

#include "questions/common/ListNode.hpp"

static ListNode *createList(std::initializer_list<int> li);

static ListNode *createList(const int *begin, const int *end);

static void concatinate(ListNode *head1, ListNode *head2);

static std::string *ListToString(ListNode *beg);

ListNode *createList(std::initializer_list<int> li) {
  return createList(std::begin(li), std::end(li));
}

ListNode *createList(const int *begin, const int *end) {
  ListNode *head = nullptr;
  ListNode *ptr = nullptr;
  for (const int *beg = begin; beg != end; beg++) {
    ListNode *node = new ListNode(*beg);
    if (beg == begin) {
      head = node;
      ptr = head;
    } else {
      ptr->next = node;
      ptr = ptr->next;
    }
  }
  return head;
}

void concatinate(ListNode *head1, ListNode *head2) {
  while (head1->next != nullptr) {
    head1 = head1->next;
  }
  head1->next = head2;
}

std::string *ListToString(ListNode *begin) {
  std::string *output = new std::string("[");
  ListNode *first = begin;
  while (begin != nullptr) {
    if (begin != first) {
      *output += " ";
    }
    *output += std::to_string(begin->val);
    begin = begin->next;
  }
  *output += "]";
  return output;
}

#endif /* UTILS_H */