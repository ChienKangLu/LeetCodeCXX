#ifndef QUESTION80_SOLUTION1_H_
#define QUESTION80_SOLUTION1_H_

#include "questions/question80/Solution.hpp"

namespace Question80 {

int Solution1::removeDuplicates(vector<int>& nums) {
  if (nums.empty()) {
    return 0;
  }

  int w = 1;
  int count = 1;

  for (int i = 1; i < nums.size(); i++) {
    if (nums[i] == nums[i - 1]) {
      count++;
    } else {
      count = 1;
    }

    if (count <= 2) {
      nums[w++] = nums[i];
    }
  }

  return w;
}
}  // namespace Question80

#endif