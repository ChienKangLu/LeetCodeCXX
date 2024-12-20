#include <algorithm>
#include <iterator>

#include "gtest/gtest.h"
#include "questions/removeelement/Solution.hpp"

void createNums(std::vector<int> &nums, std::initializer_list<int> li);

void verifyNums(std::initializer_list<int> expected, std::vector<int> actual,
                int size, int expectedSize);

template <typename T>
class RemoveElementTestBase : public ::testing::Test {
 protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
  std::vector<int> nums;
  int val;
};

TYPED_TEST_SUITE_P(RemoveElementTestBase);

TYPED_TEST_P(RemoveElementTestBase, test1) {
  // GIVEN
  createNums(this->nums, {3, 2, 2, 3});
  this->val = 3;

  // WHEN
  int size = this->solution.removeElement(this->nums, this->val);

  // THEN
  verifyNums({2, 2}, this->nums, size, 2);
}

TYPED_TEST_P(RemoveElementTestBase, test2) {
  // GIVEN
  createNums(this->nums, {0, 1, 2, 2, 3, 0, 4, 2});
  this->val = 2;

  // WHEN
  int size = this->solution.removeElement(this->nums, this->val);

  // THEN
  verifyNums({0, 1, 4, 0, 3}, this->nums, size, 5);
}

TYPED_TEST_P(RemoveElementTestBase, test3) {
  // GIVEN
  createNums(this->nums, {2, 2, 2, 2, 2, 2, 1});
  this->val = 2;

  // WHEN
  int size = this->solution.removeElement(this->nums, this->val);

  // THEN
  verifyNums({1}, this->nums, size, 1);
}

TYPED_TEST_P(RemoveElementTestBase, test4) {
  // GIVEN
  createNums(this->nums, {1, 2, 3, 4, 5, 7, 9});
  this->val = 6;

  // WHEN
  int size = this->solution.removeElement(this->nums, this->val);

  // THEN
  verifyNums({1, 2, 3, 4, 5, 7, 9}, this->nums, size, 7);
}

void createNums(std::vector<int> &nums, std::initializer_list<int> li) {
  for (const int *beg = li.begin(); beg != li.end(); beg++) {
    nums.push_back(*beg);
  }
}

void verifyNums(std::initializer_list<int> expected, std::vector<int> actual,
                int size, int expectedSize) {
  ASSERT_EQ(size, expectedSize);
  for (const int *beg = expected.begin(); beg != expected.end(); beg++) {
    ASSERT_TRUE(std::find(actual.begin(), actual.begin() + size, *beg) !=
                actual.begin() + size + 1);
  }
}