#ifndef QUESTION3_SOLUTION1_H_
#define QUESTION3_SOLUTION1_H_

#include <unordered_map>

#include "questions/question3/Solution.hpp"

namespace Question3 {
int Solution1::lengthOfLongestSubstring(string s) {
  int left = 0;
  int right = 0;
  unordered_map<char, int> charMap{};
  int result = 0;

  while (right < s.size()) {
    const char rightChar = s[right];
    charMap[rightChar]++;

    while (charMap[rightChar] > 1) {
      char leftChar = s[left];
      charMap[leftChar]--;
      left++;
    }

    result = max(result, right - left + 1);

    right++;
  }
  return result;
}
}  // namespace Question3

#endif