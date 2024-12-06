#include "../utils/ListNodeUtils.cpp"
#include "gtest/gtest.h"
#include "questions/reverselinkedlistii/Solution.hpp"

template <typename T>
class ReverseLinkedListIITestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
  ListNode *head = nullptr;
  int left;
  int right;
};

TYPED_TEST_SUITE_P(ReverseLinkedListIITestBase);

TYPED_TEST_P(ReverseLinkedListIITestBase, test1) {
  // GIVEN
  this->head = createList({1, 2, 3, 4, 5});
  this->left = 2;
  this->right = 4;

  // WHEN
  ListNode *result =
      this->solution.reverseBetween(this->head, this->left, this->right);
  const std::string resultString = *ListToString(result);

  // // THEN
  EXPECT_STREQ("[1 4 3 2 5]", resultString.c_str());
}

TYPED_TEST_P(ReverseLinkedListIITestBase, test2) {
  // GIVEN
  this->head = createList({5});
  this->left = 1;
  this->right = 1;

  // WHEN
  ListNode *result =
      this->solution.reverseBetween(this->head, this->left, this->right);
  const std::string resultString = *ListToString(result);

  // // THEN
  EXPECT_STREQ("[5]", resultString.c_str());
}

TYPED_TEST_P(ReverseLinkedListIITestBase, test3) {
  // GIVEN
  this->head = createList({5, 3});
  this->left = 1;
  this->right = 2;

  // WHEN
  ListNode *result =
      this->solution.reverseBetween(this->head, this->left, this->right);
  const std::string resultString = *ListToString(result);

  // // THEN
  EXPECT_STREQ("[3 5]", resultString.c_str());
}