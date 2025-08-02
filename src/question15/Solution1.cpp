#ifndef QUESTION15_SOLUTION1_H_
#define QUESTION15_SOLUTION1_H_

#include <algorithm>

#include "questions/question15/Solution.hpp"

namespace Question15 {
vector<vector<int>> Solution1::threeSum(vector<int>& nums) {
  vector<vector<int>> result;

  sort(nums.begin(), nums.end());

  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] > 0) {
      break;
    }
    if (i == 0 || nums[i] != nums[i - 1]) {  // Prevent duplicates
      findTwoSum(nums, i, result);
    }
  }

  return result;
}

void Solution1::findTwoSum(vector<int>& nums, int i,
                           vector<vector<int>>& result) {
  int left = i + 1;
  int right = nums.size() - 1;
  while (left < right) {
    const int sum = nums[i] + nums[left] + nums[right];
    if (sum < 0) {
      left++;
    } else if (sum > 0) {
      right--;
    } else {
      result.push_back({nums[i], nums[left], nums[right]});

      left++;
      right--;

      // Prevent duplicates
      while (left < right) {
        if (nums[left] == nums[left - 1]) {
          left++;
        } else {
          break;
        }
      }
    }
  }
}
}  // namespace Question15

#endif