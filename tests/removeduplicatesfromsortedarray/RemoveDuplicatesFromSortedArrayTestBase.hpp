#include "gtest/gtest.h"
#include "questions/removeduplicatesfromsortedarray/Solution.hpp"
#include <iterator>

void createNums(std::vector<int> &nums, std::initializer_list<int> li);

void verifyVector(std::initializer_list<int> expected, std::vector<int> actual);

template <typename T>
class RemoveDuplicatesFromSortedArrayTestBase : public ::testing::Test 
{
protected:
  void SetUp() override {}

  void TearDown() override {}

  T soluion = T();
  std::vector<int> nums;
};

TYPED_TEST_SUITE_P(RemoveDuplicatesFromSortedArrayTestBase);

TYPED_TEST_P(RemoveDuplicatesFromSortedArrayTestBase, test1)
{
  // GIVEN
  createNums(this->nums, { 1, 2, 2, 3 });

  // WHEN
  this->soluion.removeDuplicates(this->nums);

  // THEN
  verifyVector({ 1, 2, 3 }, this->nums);
}

TYPED_TEST_P(RemoveDuplicatesFromSortedArrayTestBase, test2)
{
  // GIVEN
  createNums(this->nums, { 2 });

  // WHEN
  this->soluion.removeDuplicates(this->nums);

  // THEN
  verifyVector({ 2 }, this->nums);
}

TYPED_TEST_P(RemoveDuplicatesFromSortedArrayTestBase, test3)
{
  // GIVEN
  createNums(this->nums, { 2, 2 });

  // WHEN
  this->soluion.removeDuplicates(this->nums);

  // THEN
  verifyVector({ 2 }, this->nums);
}

TYPED_TEST_P(RemoveDuplicatesFromSortedArrayTestBase, test4)
{
  // GIVEN
  createNums(this->nums, {});

  // WHEN
  this->soluion.removeDuplicates(this->nums);

  // THEN
  verifyVector({}, this->nums);
}

TYPED_TEST_P(RemoveDuplicatesFromSortedArrayTestBase, test5)
{
  // GIVEN
  createNums(this->nums, { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 });

  // WHEN
  this->soluion.removeDuplicates(this->nums);

  // THEN
  verifyVector({ 0, 1, 2, 3, 4 }, this->nums);
}

void createNums(std::vector<int> &nums, std::initializer_list<int> li)
{
  for (const int *beg = li.begin(); beg != li.end(); beg++)
  {
    nums.push_back(*beg);
  }
}

void verifyVector(std::initializer_list<int> expected, std::vector<int> actual)
{
  const int *ptr = expected.begin();
  ASSERT_EQ(expected.size(), actual.size());
  for (int i = 0; i < expected.size(); i++)
  {
    ASSERT_EQ(*(ptr++), actual[i]);
  }
}