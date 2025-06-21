#ifndef KTH_LARGEST_ELEMENT_IN_AN_ARRAY_SOLUTION1_H_
#define KTH_LARGEST_ELEMENT_IN_AN_ARRAY_SOLUTION1_H_

#include "questions/kthlargestelementinanarray/Solution.hpp"

// Quick selection
// Note: it takes quite a long time (18s) for test3, thus test3 is skipped by
// default for this solution.
int Solution2::findKthLargest(vector<int> &nums, int k) {
  const int length = nums.size();
  return partition(nums, 0, length - 1, length - k);
}

int Solution2::partition(vector<int> &nums, int start, int end, int target) {
  int pivot = nums[end];
  int p = start;
  for (int i = start; i < end; i++) {
    if (nums[i] <= pivot) {
      swap(nums[i], nums[p]);
      p++;
    }
  }
  swap(nums[end], nums[p]);

  if (target > p) {
    return partition(nums, p + 1, end, target);
  } else if (target < p) {
    return partition(nums, start, p - 1, target);
  } else {
    return nums[p];
  }
}

#endif