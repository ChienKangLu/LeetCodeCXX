#ifndef QUESTION15_SOLUTION1_H_
#define QUESTION15_SOLUTION1_H_

#include <algorithm>
#include <unordered_set>

#include "questions/question15/Solution.hpp"

namespace Question15 {
vector<vector<int>> Solution2::threeSum(vector<int>& nums) {
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

void Solution2::findTwoSum(vector<int>& nums, int i,
                           vector<vector<int>>& result) {
  unordered_set<int> seen;
  for (int j = i + 1; j < nums.size(); j++) {
    const int complement = -nums[i] - nums[j];
    if (seen.count(complement)) {
      result.push_back({nums[i], complement, nums[j]});

      // Prevent duplicates
      while (j < nums.size() - 1 && nums[j] == nums[j + 1]) {
        j++;
      }
    }
    seen.insert(nums[j]);
  }
}
}  // namespace Question15

#endif