#ifndef SORT_COLORS_SOLUTION1_H_
#define SORT_COLORS_SOLUTION1_H_

#include "questions/sortcolors/Solution.hpp"

// Counting sort
void Solution1::sortColors(vector<int> &nums) {
  vector<int> counting(3);
  for (const int &num : nums) {
    counting[num]++;
  }

  auto it = nums.begin();
  for (int i = 0; i < 3; i++) {
    while (counting[i]--) {
      *it = i;
      it++;
    }
  }
}

#endif