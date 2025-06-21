#ifndef SORT_COLORS_SOLUTION1_H_
#define SORT_COLORS_SOLUTION1_H_

#include <utility>

#include "questions/sortcolors/Solution.hpp"

// Two pointers
void Solution2::sortColors(vector<int> &nums) {
  int l = 0;
  int r = nums.size() - 1;
  int i = 0;

  while (i <= r) {
    if (nums[i] == 0) {
      swap(nums[i], nums[l]);
      l++;
    } else if (nums[i] == 2) {
      swap(nums[i], nums[r]);
      r--;
      i--;
    }
    i++;
  }
}

#endif