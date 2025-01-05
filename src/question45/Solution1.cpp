#ifndef QUESTION45_SOLUTION1_H_
#define QUESTION45_SOLUTION1_H_

#include "questions/question45/Solution.hpp"

namespace Question45 {
int Solution1::jump(vector<int>& nums) {
  int l = 0;
  int r = 0;
  int size = nums.size();
  int jumps = 0;
  while (r < size - 1) {
    int furthest = 0;
    for (int i = l; i < r + 1; i++) {
      furthest = max(furthest, i + nums[i]);
    }
    l = r + 1;
    r = furthest;
    jumps++;
  }

  return jumps;
}
}  // namespace Question45

#endif