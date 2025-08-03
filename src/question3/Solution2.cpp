#ifndef QUESTION3_SOLUTION2_H_
#define QUESTION3_SOLUTION2_H_

#include <iostream>
#include <unordered_map>

#include "questions/question3/Solution.hpp"

namespace Question3 {
int Solution2::lengthOfLongestSubstring(string s) {
  int left = 0;
  unordered_map<char, int> charNextMap{};
  int result = 0;

  for (int right = 0; right < s.size(); right++) {
    char rightChar = s[right];
    if (charNextMap[rightChar] > 0) {
      // Move left pointer to the next index of the character
      left = max(left, charNextMap[rightChar]);  // max is important to ensure
                                                 // we don't go backwards
    }

    result = max(result, right - left + 1);

    // Store the next index of the character
    charNextMap[rightChar] = right + 1;
  }
  return result;
}
}  // namespace Question3

#endif