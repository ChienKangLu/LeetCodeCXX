#ifndef QUESTION238_SOLUTION1_H_
#define QUESTION238_SOLUTION1_H_

#include "questions/question238/Solution.hpp"

// time complexity: O(n)
// space complexity: O(1)
namespace Question238 {
vector<int> Solution2::productExceptSelf(vector<int>& nums) {
  const auto size = nums.size();

  vector<int> answer(size, 1);

  for (int i = 0; i < size; i++) {
    if (i == 0) {
      continue;
    }

    answer[i] = answer[i - 1] * nums[i - 1];
  }

  int right = 1;
  for (int i = size - 1; i >= 0; i--) {
    answer[i] = answer[i] * right;
    right *= nums[i];
  }

  return answer;
}
}  // namespace Question238

#endif