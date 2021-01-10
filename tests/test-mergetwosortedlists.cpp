#include "gtest/gtest-printers.h"
#include "gtest/gtest.h"
#include "questions/mergetwosortedlists/Solution.hpp"
#include <iterator>
#include <string>

ListNode *createList(std::initializer_list<int> li);

ListNode *createList(const int *begin, const int *end);

std::string *ListToString(ListNode *beg);

class MergeTwoSortedListsTest : public ::testing::Test 
{
protected:
  void SetUp() override {}

  void TearDown() override {}

  Solution soluion;
  ListNode* l1 = nullptr;
  ListNode* l2 = nullptr;
};

TEST_F(MergeTwoSortedListsTest, test1)
{
  l1 = createList({});
  l2 = createList({});
  ListNode* result = soluion.mergeTwoLists(l1, l2);
  const std::string resultString = *ListToString(result);
  EXPECT_STREQ("[]", resultString.c_str());
}

TEST_F(MergeTwoSortedListsTest, test2)
{
  l1 = createList({ 1, 2, 3, 4 });
  l2 = createList({});
  ListNode* result = soluion.mergeTwoLists(l1, l2);
  const std::string resultString = *ListToString(result);
  EXPECT_STREQ("[1 2 3 4]", resultString.c_str());
}

TEST_F(MergeTwoSortedListsTest, test3)
{
  l1 = createList({});
  l2 = createList({ 1, 2, 3, 4 });
  ListNode* result = soluion.mergeTwoLists(l1, l2);
  const std::string resultString = *ListToString(result);
  EXPECT_STREQ("[1 2 3 4]", resultString.c_str());
}

TEST_F(MergeTwoSortedListsTest, test4)
{
  l1 = createList({ 2, 6, 7, 9 });
  l2 = createList({ 1 });
  ListNode* result = soluion.mergeTwoLists(l1, l2);
  const std::string resultString = *ListToString(result);
  EXPECT_STREQ("[1 2 6 7 9]", resultString.c_str());
}

TEST_F(MergeTwoSortedListsTest, test5)
{
  l1 = createList({ 2, 6, 7, 9 });
  l2 = createList({ 1, 1 });
  ListNode* result = soluion.mergeTwoLists(l1, l2);
  const std::string resultString = *ListToString(result);
  EXPECT_STREQ("[1 1 2 6 7 9]", resultString.c_str());
}

TEST_F(MergeTwoSortedListsTest, test6)
{
  l1 = createList({ 2, 6, 7, 9 });
  l2 = createList({ 10});
  ListNode* result = soluion.mergeTwoLists(l1, l2);
  const std::string resultString = *ListToString(result);
  EXPECT_STREQ("[2 6 7 9 10]", resultString.c_str());
}

TEST_F(MergeTwoSortedListsTest, test7)
{
  l1 = createList({ 2, 6, 7, 9 });
  l2 = createList({ 10, 10 });
  ListNode* result = soluion.mergeTwoLists(l1, l2);
  const std::string resultString = *ListToString(result);
  EXPECT_STREQ("[2 6 7 9 10 10]", resultString.c_str());
}

TEST_F(MergeTwoSortedListsTest, test8)
{
  l1 = createList({ 1, 2, 3, 4, 5 });
  l2 = createList({ 6, 7});
  ListNode* result = soluion.mergeTwoLists(l1, l2);
  const std::string resultString = *ListToString(result);
  EXPECT_STREQ("[1 2 3 4 5 6 7]", resultString.c_str());
}

TEST_F(MergeTwoSortedListsTest, test9)
{
  l1 = createList({ 2, 6, 7, 9 });
  l2 = createList({ 1, 3, 6, 7, 9});
  ListNode* result = soluion.mergeTwoLists(l1, l2);
  const std::string resultString = *ListToString(result);
  EXPECT_STREQ("[1 2 3 6 6 7 7 9 9]", resultString.c_str());
}

TEST_F(MergeTwoSortedListsTest, test10)
{
  l1 = createList({ 2, 6, 7, 9 });
  l2 = createList({ 1, 10});
  ListNode* result = soluion.mergeTwoLists(l1, l2);
  const std::string resultString = *ListToString(result);
  EXPECT_STREQ("[1 2 6 7 9 10]", resultString.c_str());
}

TEST_F(MergeTwoSortedListsTest, test11)
{
  l1 = createList({ 1, 2, 4 });
  l2 = createList({ 1, 3, 4 });
  ListNode* result = soluion.mergeTwoLists(l1, l2);
  const std::string resultString = *ListToString(result);
  EXPECT_STREQ("[1 1 2 3 4 4]", resultString.c_str());
}

TEST_F(MergeTwoSortedListsTest, test12)
{
  l1 = createList({});
  l2 = createList({ 0 });
  ListNode* result = soluion.mergeTwoLists(l1, l2);
  const std::string resultString = *ListToString(result);
  EXPECT_STREQ("[0]", resultString.c_str());
}

ListNode *createList(std::initializer_list<int> li) {
  return createList(std::begin(li), std::end(li));
}

ListNode *createList(const int *begin, const int *end) {
  ListNode *head = nullptr;
  ListNode *ptr = nullptr;
  for (const int *beg = begin; beg != end; beg++) {
    ListNode* node = new ListNode(*beg);
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

std::string *ListToString(ListNode *begin) {
  std::string* output = new std::string("[");
  ListNode* first = begin;
  while(begin != nullptr) {
    if (begin != first) {
      *output += " ";
    }
    *output += std::to_string(begin->val);
    begin = begin->next;
  }
  *output += "]";
  return output;
}