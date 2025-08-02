#ifndef QUESTION15_SOLUTION1_H_
#define QUESTION15_SOLUTION1_H_

#include <algorithm>
#include <set>
#include <unordered_map>
#include <unordered_set>

#include "questions/question15/Solution.hpp"

namespace Question15 {
vector<vector<int>> Solution3::threeSum(vector<int>& nums) {
  set<vector<int>> result;
  unordered_set<int> duplicates;
  unordered_map<int, int> seen;

  for (int i = 0; i < nums.size(); i++) {
    const auto isDuplicate = duplicates.insert(nums[i]).second == false;
    if (isDuplicate) {
      continue;
    }

    for (int j = i + 1; j < nums.size(); j++) {
      const int complement = -nums[i] - nums[j];
      auto it = seen.find(complement);
      if (it != seen.end() && it->second == i) {
        vector<int> triplet{nums[i], nums[j], complement};
        sort(triplet.begin(), triplet.end());
        result.insert(triplet);
      }

      //  Values in the hashmap will indicate whether we have encountered that
      //  element in the current iteration
      seen[nums[j]] = i;
    }
  }

  return vector<vector<int>>(begin(result), end(result));
}
}  // namespace Question15

#endif