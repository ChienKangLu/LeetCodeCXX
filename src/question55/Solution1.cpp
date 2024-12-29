#ifndef QUESTION55_SOLUTION1_H_
#define QUESTION55_SOLUTION1_H_

#include <algorithm>

#include "questions/question55/Solution.hpp"

// Backtracking (Not Accepted: TLE)
namespace Question55 {
bool Solution1::canJump(vector<int>& nums) {
  return canJumpFromPostion(0, nums);
}

bool Solution1::canJumpFromPostion(int position, vector<int>& nums) {
  if (position == nums.size() - 1) {
    return true;
  }

  const auto furthestJump =
      min(position + nums[position], (int)nums.size() - 1);

  for (int nextPosition = position + 1; nextPosition <= furthestJump;
       nextPosition++) {
    if (canJumpFromPostion(nextPosition, nums)) {
      return true;
    }
  }
  return false;
}
}  // namespace Question55

#endif