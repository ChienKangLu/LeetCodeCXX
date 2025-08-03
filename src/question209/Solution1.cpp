#ifndef QUESTION209_SOLUTION1_H_
#define QUESTION209_SOLUTION1_H_

#include <climits>

#include "questions/question209/Solution.hpp"

namespace Question209 {
int Solution1::minSubArrayLen(int target, vector<int>& nums) {
  int left = 0;
  int minLength = INT_MAX;
  int sum = 0;

  for (int right = 0; right < nums.size(); right++) {
    sum += nums[right];
    while (sum >= target) {
      minLength = min(minLength, right - left + 1);
      sum -= nums[left];
      left++;
    }
  }
  return minLength == INT_MAX ? 0 : minLength;
}
}  // namespace Question209

#endif