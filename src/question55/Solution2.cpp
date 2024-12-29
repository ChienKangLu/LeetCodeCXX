#ifndef QUESTION55_SOLUTION1_H_
#define QUESTION55_SOLUTION1_H_

#include <algorithm>

#include "questions/question55/Solution.hpp"

// Dynamic Programming Top-down
namespace Question55 {
bool Solution2::canJump(vector<int>& nums) {
  memo = vector<Index>(nums.size());
  for (int i = 0; i < memo.size(); i++) {
    memo[i] = Index::UNKNWON;
  }
  memo[memo.size() - 1] = Index::GOOD;

  return canJumpFromPostion(0, nums);
}

bool Solution2::canJumpFromPostion(int position, vector<int>& nums) {
  if (memo[position] != Index::UNKNWON) {
    return memo[position] == Index::GOOD;
  }

  const auto furthestJump =
      min(position + nums[position], (int)nums.size() - 1);

  for (int nextPosition = position + 1; nextPosition <= furthestJump;
       nextPosition++) {
    if (canJumpFromPostion(nextPosition, nums)) {
      memo[position] = Index::GOOD;
      return true;
    }
  }
  memo[position] = Index::BAD;
  return false;
}
}  // namespace Question55

#endif