#ifndef QUESTION189_SOLUTION1_H_
#define QUESTION189_SOLUTION1_H_

#include "questions/question189/Solution.hpp"

namespace Question189 {

void Solution1::rotate(vector<int>& nums, int k) {
  int size = nums.size();
  k %= size;

  for (int i = 0; i < k; i++) {
    int previous = nums[size - 1];
    for (int j = 0; j < size; j++) {
      int temp = nums[j];
      nums[j] = previous;
      previous = temp;
    }
  }
}
}  // namespace Question189

#endif