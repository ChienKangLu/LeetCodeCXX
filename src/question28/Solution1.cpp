#ifndef QUESTION28_SOLUTION1_H_
#define QUESTION28_SOLUTION1_H_

#include <iostream>

#include "questions/question28/Solution.hpp"

namespace Question28 {

int Solution1::strStr(string haystack, string needle) {
  int m = needle.size();
  int n = haystack.size();

  for (int windowStart = 0; windowStart <= n - m; windowStart++) {
    for (int i = 0; i < m; i++) {
      if (needle[i] != haystack[windowStart + i]) {
        break;
      } else if (i == m - 1) {
        return windowStart;
      }
    }
  }
  return -1;
}
}  // namespace Question28

#endif