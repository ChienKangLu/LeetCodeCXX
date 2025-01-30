#ifndef QUESTION238_SOLUTION1_H_
#define QUESTION238_SOLUTION1_H_

#include "questions/question238/Solution.hpp"

// time complexity: O(n)
// space complexity: O(n)
namespace Question238 {
vector<int> Solution1::productExceptSelf(vector<int>& nums) {
  const auto size = nums.size();

  vector<int> left(size, 1);
  vector<int> right(size, 1);
  vector<int> answer(size, 1);

  for (int i = 0; i < size; i++) {
    if (i == 0) {
      continue;
    }

    left[i] = left[i - 1] * nums[i - 1];
  }

  for (int i = size - 1; i >= 0; i--) {
    if (i == size - 1) {
      continue;
    }

    right[i] = right[i + 1] * nums[i + 1];
  }

  for (int i = 0; i < size; i++) {
    answer[i] = left[i] * right[i];
  }

  return answer;
}
}  // namespace Question238

#endif