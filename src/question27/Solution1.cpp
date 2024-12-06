#ifndef QUESTION27_SOLUTION1_H_
#define QUESTION27_SOLUTION1_H_

#include "questions/question27/Solution.hpp"

namespace Question27 {
int Solution1::removeElement(vector<int>& nums, int val) {
  int k = 0;

  for (const auto& num : nums) {
    if (num != val) {
      nums[k++] = num;
    }
  }

  return k;
}
}  // namespace Question27

#endif