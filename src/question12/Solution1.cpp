#ifndef QUESTION12_SOLUTION1_H_
#define QUESTION12_SOLUTION1_H_

#include "questions/question12/Solution.hpp"
#include <vector>

namespace Question12 {

string Solution1::intToRoman(int num) {
  std::vector<int> nums{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
  std::vector<string> symbols{"M",  "CM", "D",  "CD", "C",  "XC", "L",
                         "XL", "X",  "IX", "V",  "IV", "I"};
  int size = nums.size();

  string roman{};
  for (int i = 0; i < size; i++) {
    if (num == 0) {
      break;
    }

    while (nums[i] <= num) {
      roman += symbols[i];
      num -= nums[i];
    }
  }
  return roman;
}
}  // namespace Question12

#endif