#ifndef REMOVE_ELEMENT_SOLUTION2_H_
#define REMOVE_ELEMENT_SOLUTION2_H_

#include "questions/removeelement/Solution.hpp"

int Solution3::removeElement(std::vector<int> &nums, int val) {
  int k = 0;
  for (int &num : nums) {
    if (num != val) {
      nums[k++] = num;
    }
  }
  return k;
}

#endif