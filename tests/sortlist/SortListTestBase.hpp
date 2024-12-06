#include "../utils/ListNodeUtils.cpp"
#include "gtest/gtest.h"
#include "questions/sortlist/Solution.hpp"

template <typename T>
class SortListTestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
  ListNode *l1 = nullptr;
};

TYPED_TEST_SUITE_P(SortListTestBase);

TYPED_TEST_P(SortListTestBase, test1) {
  // GIVEN
  this->l1 = createList({4, 2, 1, 3});

  // WHEN
  ListNode *result = this->solution.sortList(this->l1);
  const std::string resultString = *ListToString(result);

  // THEN
  EXPECT_STREQ("[1 2 3 4]", resultString.c_str());
}

TYPED_TEST_P(SortListTestBase, test2) {
  // GIVEN
  this->l1 = createList({-1, 5, 3, 4, 0});

  // WHEN
  ListNode *result = this->solution.sortList(this->l1);
  const std::string resultString = *ListToString(result);

  // THEN
  EXPECT_STREQ("[-1 0 3 4 5]", resultString.c_str());
}

TYPED_TEST_P(SortListTestBase, test3) {
  // GIVEN
  this->l1 = createList({});

  // WHEN
  ListNode *result = this->solution.sortList(this->l1);
  const std::string resultString = *ListToString(result);

  // THEN
  EXPECT_STREQ("[]", resultString.c_str());
}

TYPED_TEST_P(SortListTestBase, test4) {
  // GIVEN
  this->l1 = createList({1});

  // WHEN
  ListNode *result = this->solution.sortList(this->l1);
  const std::string resultString = *ListToString(result);

  // THEN
  EXPECT_STREQ("[1]", resultString.c_str());
}

TYPED_TEST_P(SortListTestBase, test5) {
  // GIVEN
  this->l1 = createList({1, 1, 1, 1});

  // WHEN
  ListNode *result = this->solution.sortList(this->l1);
  const std::string resultString = *ListToString(result);

  // THEN
  EXPECT_STREQ("[1 1 1 1]", resultString.c_str());
}