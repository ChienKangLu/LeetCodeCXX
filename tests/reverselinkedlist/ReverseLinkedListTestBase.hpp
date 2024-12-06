#include <string>

#include "../utils/ListNodeUtils.cpp"
#include "gtest/gtest.h"
#include "questions/reverselinkedlist/Solution.hpp"

template <typename T>
class ReverseLinkedListTestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
  ListNode *head = nullptr;
};

TYPED_TEST_SUITE_P(ReverseLinkedListTestBase);

TYPED_TEST_P(ReverseLinkedListTestBase, test1) {
  // GIVEN
  this->head = createList({1, 2, 3, 4});

  // WHEN
  ListNode *result = this->solution.reverseList(this->head);
  const std::string resultString = *ListToString(result);

  // // THEN
  EXPECT_STREQ("[4 3 2 1]", resultString.c_str());
}

TYPED_TEST_P(ReverseLinkedListTestBase, test2) {
  // GIVEN
  this->head = createList({1});

  // WHEN
  ListNode *result = this->solution.reverseList(this->head);
  const std::string resultString = *ListToString(result);

  // THEN
  EXPECT_STREQ("[1]", resultString.c_str());
}

TYPED_TEST_P(ReverseLinkedListTestBase, test3) {
  // GIVEN
  this->head = createList({});

  // WHEN
  ListNode *result = this->solution.reverseList(this->head);
  const std::string resultString = *ListToString(result);

  // THEN
  EXPECT_STREQ("[]", resultString.c_str());
}