#ifndef QUESTION169_SOLUTION1_H_
#define QUESTION169_SOLUTION1_H_

#include "questions/question169/Solution.hpp"

namespace Question169 {
int Solution1::majorityElement(vector<int>& nums) {
  int majority = nums[0];
  int count = 1;

  for (int i = 1; i < nums.size(); i++) {
    if (nums[i] == majority) {
      count++;
    } else {
      count--;
    }

    if (count == 0) {
      majority = nums[i];
      count = 1;
    }
  }

  return majority;
}
}  // namespace Question169

#endif