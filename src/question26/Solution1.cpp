#ifndef QUESTION26_SOLUTION1_H_
#define QUESTION26_SOLUTION1_H_

#include "questions/question26/Solution.hpp"

namespace Question26 {
int Solution1::removeDuplicates(vector<int>& nums) {
  int size = nums.size();
  if (size <= 1) {
    return size;
  }

  int w = 1;

  for (int i = 1; i < size; i++) {
    if (nums[i] != nums[i - 1]) {
      nums[w++] = nums[i];
    }
  }

  return w;
}
}  // namespace Question26

#endif