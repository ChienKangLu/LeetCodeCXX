#include "gtest/gtest.h"
#include "questions/removeduplicatesfromsortedarray/Solution.hpp"
#include <iterator>

void createNums(std::vector<int> &nums, std::initializer_list<int> li);

void verifyVector(std::initializer_list<int> expected, std::vector<int> actual, int size);

template <typename T>
class RemoveDuplicatesFromSortedArrayTestBase : public ::testing::Test 
{
protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
  std::vector<int> nums;
};

TYPED_TEST_SUITE_P(RemoveDuplicatesFromSortedArrayTestBase);

TYPED_TEST_P(RemoveDuplicatesFromSortedArrayTestBase, test1)
{
  // GIVEN
  createNums(this->nums, { 1, 2, 2, 3 });

  // WHEN
  int size = this->solution.removeDuplicates(this->nums);

  // THEN
  verifyVector({ 1, 2, 3 }, this->nums, size);
}

TYPED_TEST_P(RemoveDuplicatesFromSortedArrayTestBase, test2)
{
  // GIVEN
  createNums(this->nums, { 2 });

  // WHEN
  int size = this->solution.removeDuplicates(this->nums);

  // THEN
  verifyVector({ 2 }, this->nums, size);
}

TYPED_TEST_P(RemoveDuplicatesFromSortedArrayTestBase, test3)
{
  // GIVEN
  createNums(this->nums, { 2, 2 });

  // WHEN
  int size = this->solution.removeDuplicates(this->nums);

  // THEN
  verifyVector({ 2 }, this->nums, size);
}

TYPED_TEST_P(RemoveDuplicatesFromSortedArrayTestBase, test4)
{
  // GIVEN
  createNums(this->nums, {});

  // WHEN
  int size = this->solution.removeDuplicates(this->nums);

  // THEN
  verifyVector({}, this->nums, size);
}

TYPED_TEST_P(RemoveDuplicatesFromSortedArrayTestBase, test5)
{
  // GIVEN
  createNums(this->nums, { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 });

  // WHEN
  int size = this->solution.removeDuplicates(this->nums);

  // THEN
  verifyVector({ 0, 1, 2, 3, 4 }, this->nums, size);
}

TYPED_TEST_P(RemoveDuplicatesFromSortedArrayTestBase, test6)
{
  // GIVEN
  createNums(this->nums, { 1, 1, 2 });

  // WHEN
  int size = this->solution.removeDuplicates(this->nums);

  // THEN
  verifyVector({ 1, 2 }, this->nums, size);
}

TYPED_TEST_P(RemoveDuplicatesFromSortedArrayTestBase, test7)
{
  // GIVEN
  createNums(this->nums, { 1, 2 });

  // WHEN
  int size = this->solution.removeDuplicates(this->nums);

  // THEN
  verifyVector({ 1, 2 }, this->nums, size);
}

void createNums(std::vector<int> &nums, std::initializer_list<int> li)
{
  for (const int *beg = li.begin(); beg != li.end(); beg++)
  {
    nums.push_back(*beg);
  }
}

void verifyVector(std::initializer_list<int> expected, std::vector<int> actual, int size)
{
  ASSERT_EQ(expected.size(), size);
  const int *ptr = expected.begin();
  for (int i = 0; i < size; i++)
  {
    ASSERT_EQ(*(ptr++), actual[i]);
  }
}