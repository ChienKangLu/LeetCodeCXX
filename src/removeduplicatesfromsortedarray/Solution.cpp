#ifndef REMOVE_DUPLICATES_FROM_SORTED_ARRAY_SOLUTION_H_
#define REMOVE_DUPLICATES_FROM_SORTED_ARRAY_SOLUTION_H_

#include "questions/removeduplicatesfromsortedarray/Solution.hpp"

int Solution::removeDuplicates(std::vector<int> &nums) {
  if (nums.size() > 1) {
    int target = nums.front();
    for (auto it = nums.begin() + 1; it != nums.end();) {
      if (*it == target) {
          it = nums.erase(it);
      } else {
          target = *it;
          it++;
      }
    }
  }
  return nums.size();
}

#endif