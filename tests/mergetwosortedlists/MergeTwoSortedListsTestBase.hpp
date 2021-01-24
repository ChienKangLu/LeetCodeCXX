#include "gtest/gtest-printers.h"
#include "gtest/gtest.h"
#include "questions/mergetwosortedlists/Solution.hpp"
#include <iterator>
#include <string>

ListNode *createList(std::initializer_list<int> li);

ListNode *createList(const int *begin, const int *end);

std::string *ListToString(ListNode *beg);

template <typename T>
class MergeTwoSortedListsTestBase : public ::testing::Test 
{
protected:
  void SetUp() override {}

  void TearDown() override {}

  T soluion = T();
  ListNode *l1 = nullptr;
  ListNode *l2 = nullptr;
};

TYPED_TEST_SUITE_P(MergeTwoSortedListsTestBase);

TYPED_TEST_P(MergeTwoSortedListsTestBase, test1)
{
  // GIVEN
  this->l1 = createList({});
  this->l2 = createList({});

  // WHEN
  ListNode *result = this->soluion.mergeTwoLists(this->l1, this->l2);
  const std::string resultString = *ListToString(result);

  // THEN
  EXPECT_STREQ("[]", resultString.c_str());
}

TYPED_TEST_P(MergeTwoSortedListsTestBase, test2)
{
  // GIVEN
  this->l1 = createList({ 1, 2, 3, 4 });
  this->l2 = createList({});

  // WHEN
  ListNode *result = this->soluion.mergeTwoLists(this->l1, this->l2);
  const std::string resultString = *ListToString(result);

  // THEN
  EXPECT_STREQ("[1 2 3 4]", resultString.c_str());
}

TYPED_TEST_P(MergeTwoSortedListsTestBase, test3)
{
  // GIVEN
  this->l1 = createList({});
  this->l2 = createList({ 1, 2, 3, 4 });

  // WHEN
  ListNode *result = this->soluion.mergeTwoLists(this->l1, this->l2);
  const std::string resultString = *ListToString(result);

  // THEN
  EXPECT_STREQ("[1 2 3 4]", resultString.c_str());
}

TYPED_TEST_P(MergeTwoSortedListsTestBase, test4)
{
  // GIVEN
  this->l1 = createList({ 2, 6, 7, 9 });
  this->l2 = createList({ 1 });

  // WHEN
  ListNode *result = this->soluion.mergeTwoLists(this->l1, this->l2);
  const std::string resultString = *ListToString(result);

  // THEN
  EXPECT_STREQ("[1 2 6 7 9]", resultString.c_str());
}

TYPED_TEST_P(MergeTwoSortedListsTestBase, test5)
{
  // GIVEN
  this->l1 = createList({ 2, 6, 7, 9 });
  this->l2 = createList({ 1, 1 });

  // WHEN
  ListNode *result = this->soluion.mergeTwoLists(this->l1, this->l2);
  const std::string resultString = *ListToString(result);

  // THEN
  EXPECT_STREQ("[1 1 2 6 7 9]", resultString.c_str());
}

TYPED_TEST_P(MergeTwoSortedListsTestBase, test6)
{
  // GIVEN
  this->l1 = createList({ 2, 6, 7, 9 });
  this->l2 = createList({ 10});

  // WHEN
  ListNode *result = this->soluion.mergeTwoLists(this->l1, this->l2);
  const std::string resultString = *ListToString(result);

  // THEN
  EXPECT_STREQ("[2 6 7 9 10]", resultString.c_str());
}

TYPED_TEST_P(MergeTwoSortedListsTestBase, test7)
{
  // GIVEN
  this->l1 = createList({ 2, 6, 7, 9 });
  this->l2 = createList({ 10, 10 });

  // WHEN
  ListNode *result = this->soluion.mergeTwoLists(this->l1, this->l2);
  const std::string resultString = *ListToString(result);

  // THEN
  EXPECT_STREQ("[2 6 7 9 10 10]", resultString.c_str());
}

TYPED_TEST_P(MergeTwoSortedListsTestBase, test8)
{
  // GIVEN
  this->l1 = createList({ 1, 2, 3, 4, 5 });
  this->l2 = createList({ 6, 7});

  // WHEN
  ListNode *result = this->soluion.mergeTwoLists(this->l1, this->l2);
  const std::string resultString = *ListToString(result);

  // THEN
  EXPECT_STREQ("[1 2 3 4 5 6 7]", resultString.c_str());
}

TYPED_TEST_P(MergeTwoSortedListsTestBase, test9)
{
  // GIVEN
  this->l1 = createList({ 2, 6, 7, 9 });
  this->l2 = createList({ 1, 3, 6, 7, 9});

  // WHEN
  ListNode *result = this->soluion.mergeTwoLists(this->l1, this->l2);
  const std::string resultString = *ListToString(result);

  // THEN
  EXPECT_STREQ("[1 2 3 6 6 7 7 9 9]", resultString.c_str());
}

TYPED_TEST_P(MergeTwoSortedListsTestBase, test10)
{
  // GIVEN
  this->l1 = createList({ 2, 6, 7, 9 });
  this->l2 = createList({ 1, 10});

  // WHEN
  ListNode *result = this->soluion.mergeTwoLists(this->l1, this->l2);
  const std::string resultString = *ListToString(result);

  // THEN
  EXPECT_STREQ("[1 2 6 7 9 10]", resultString.c_str());
}

TYPED_TEST_P(MergeTwoSortedListsTestBase, test11)
{
  // GIVEN
  this->l1 = createList({ 1, 2, 4 });
  this->l2 = createList({ 1, 3, 4 });

  // WHEN
  ListNode *result = this->soluion.mergeTwoLists(this->l1, this->l2);
  const std::string resultString = *ListToString(result);

  // THEN
  EXPECT_STREQ("[1 1 2 3 4 4]", resultString.c_str());
}

TYPED_TEST_P(MergeTwoSortedListsTestBase, test12)
{
  // GIVEN
  this->l1 = createList({});
  this->l2 = createList({ 0 });

  // WHEN
  ListNode *result = this->soluion.mergeTwoLists(this->l1, this->l2);
  const std::string resultString = *ListToString(result);

  // THEN
  EXPECT_STREQ("[0]", resultString.c_str());
}

ListNode *createList(std::initializer_list<int> li)
{
  return createList(std::begin(li), std::end(li));
}

ListNode *createList(const int *begin, const int *end)
{
  ListNode *head = nullptr;
  ListNode *ptr = nullptr;
  for (const int *beg = begin; beg != end; beg++)
  {
    ListNode *node = new ListNode(*beg);
    if (beg == begin)
    {
      head = node;
      ptr = head;
    }
    else
    {
      ptr->next = node;
      ptr = ptr->next;
    }
  }
  return head;
}

std::string *ListToString(ListNode *begin)
{
  std::string *output = new std::string("[");
  ListNode* first = begin;
  while(begin != nullptr)
  {
    if (begin != first)
    {
      *output += " ";
    }
    *output += std::to_string(begin->val);
    begin = begin->next;
  }
  *output += "]";
  return output;
}