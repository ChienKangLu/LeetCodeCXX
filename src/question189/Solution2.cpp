#ifndef QUESTION189_SOLUTION1_H_
#define QUESTION189_SOLUTION1_H_

#include "questions/question189/Solution.hpp"

namespace Question189 {

void Solution2::rotate(vector<int>& nums, int k) {
  int size = nums.size();
  k %= size;

  int count = 0;
  int start = 0;
  while (count < size) {
    int current = start;
    int prev = nums[current];

    do {
      int next = (current + k) % size;
      int temp = nums[next];
      nums[next] = prev;

      current = next;
      prev = temp;

      count++;
    } while (start != current);

    start++;
  }
}
}  // namespace Question189

#endif