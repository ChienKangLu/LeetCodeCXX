#ifndef QUESTION58_SOLUTION2_H_
#define QUESTION58_SOLUTION2_H_

#include "questions/question58/Solution.hpp"

namespace Question58 {
int Solution2::lengthOfLastWord(std::string s) {
  if (s.empty()) {
    return 0;
  }

  int lastWordLength = 0;

  int p = s.size() - 1;
  while (p >= 0) {
    if (s[p] != ' ') {
      lastWordLength++;
    } else if (lastWordLength > 0) {
      break;
    }
    p--;
  }

  return lastWordLength;
}
}  // namespace Question58

#endif