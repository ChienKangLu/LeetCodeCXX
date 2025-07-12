#ifndef QUESTION167_SOLUTION1_H_
#define QUESTION167_SOLUTION1_H_

#include "questions/question167/Solution.hpp"

namespace Question167 {

vector<int> Solution1::twoSum(vector<int>& numbers, int target) {
  int left = 0;
  int right = numbers.size() - 1;
  while (left < right) {
    int sum = numbers[left] + numbers[right];

    if (sum == target) {
      return {left + 1, right + 1};
    } else if (sum < target) {
      left++;
    } else {
      right--;
    }
  }

  return {-1, -1};
}
}  // namespace Question167

#endif