#ifndef QUESTION169_SOLUTION1_H_
#define QUESTION169_SOLUTION1_H_

#include "questions/question169/Solution.hpp"

namespace Question169 {
int Solution2::majorityElement(vector<int>& nums) {
  int count = 0;
  int majority;

  for (const auto& num : nums) {
    if (count == 0) {
      majority = num;
    }

    count += majority == num ? 1 : -1;
  }

  return majority;
}
}  // namespace Question169

#endif