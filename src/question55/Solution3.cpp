#ifndef QUESTION55_SOLUTION1_H_
#define QUESTION55_SOLUTION1_H_

#include <algorithm>

#include "questions/question55/Solution.hpp"

// Dynamic Programming Bottom-up
namespace Question55 {
bool Solution3::canJump(vector<int>& nums) {
  vector<Index> memos{nums.size(), UNKNWON};
  memos[nums.size() - 1] = GOOD;
  for (int i = nums.size() - 2; i >= 0; i--) {
    int furthestJump = min(i + nums[i], (int)nums.size() - 1);
    for (int j = i + 1; j <= furthestJump; j++) {
      if (memos[j] == GOOD) {
        memos[i] = GOOD;
        break;
      }
    }
  }
  return memos[0] == GOOD;
}
}  // namespace Question55

#endif