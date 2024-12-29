#ifndef QUESTION55_SOLUTION1_H_
#define QUESTION55_SOLUTION1_H_

#include <algorithm>

#include "questions/question55/Solution.hpp"

//  Greedy (Best)
namespace Question55 {
bool Solution4::canJump(vector<int>& nums) {
  int lastPos = nums.size() - 1;
  for (int i = nums.size() - 1; i >= 0; i--) {
    if (i + nums[i] >= lastPos) {
      lastPos = i;
    }
  }
  return lastPos == 0;
}
}  // namespace Question55

#endif