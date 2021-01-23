#include "gtest/gtest.h"
#include "questions/removeduplicatesfromsortedarray/Solution.hpp"
#include <iterator>

void createNums(std::vector<int> &nums, std::initializer_list<int> li);

void verifyVector(std::initializer_list<int> expected, std::vector<int> actual);

class RemoveDuplicatesFromSortedArrayTest : public ::testing::Test 
{
protected:
  void SetUp() override {}

  void TearDown() override {}

  Solution soluion;
  std::vector<int> nums;
};

TEST_F(RemoveDuplicatesFromSortedArrayTest, test1)
{
  createNums(nums, { 1, 2, 2, 3 });
  soluion.removeDuplicates(nums);
  verifyVector({ 1, 2, 3 }, nums);
}

TEST_F(RemoveDuplicatesFromSortedArrayTest, test2)
{
  createNums(nums, { 2 });
  soluion.removeDuplicates(nums);
  verifyVector({ 2 }, nums);
}

TEST_F(RemoveDuplicatesFromSortedArrayTest, test3)
{
  createNums(nums, { 2, 2 });
  soluion.removeDuplicates(nums);
  verifyVector({ 2 }, nums);
}

TEST_F(RemoveDuplicatesFromSortedArrayTest, test4)
{
  createNums(nums, {});
  soluion.removeDuplicates(nums);
  verifyVector({}, nums);
}

TEST_F(RemoveDuplicatesFromSortedArrayTest, test5)
{
  createNums(nums, { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 });
  soluion.removeDuplicates(nums);
  verifyVector({ 0, 1, 2, 3, 4 }, nums);
}

void createNums(std::vector<int> &nums, std::initializer_list<int> li) {
  for (const int *beg = li.begin(); beg != li.end(); beg++) {
    nums.push_back(*beg);
  }
}

void verifyVector(std::initializer_list<int> expected, std::vector<int> actual) {
  const int *ptr = expected.begin();
  ASSERT_EQ(expected.size(), actual.size());
  for (int i = 0; i < expected.size(); i++) {
    ASSERT_EQ(*(ptr++), actual[i]);
  }
}