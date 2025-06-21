#ifndef KTH_LARGEST_ELEMENT_IN_AN_ARRAY_SOLUTION1_H_
#define KTH_LARGEST_ELEMENT_IN_AN_ARRAY_SOLUTION1_H_

#include <algorithm>

#include "questions/kthlargestelementinanarray/Solution.hpp"

int Solution1::findKthLargest(vector<int> &nums, int k) {
  sort(nums.begin(), nums.end());

  return nums[nums.size() - k];
}

#endif