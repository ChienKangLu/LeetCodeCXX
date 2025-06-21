#ifndef QUESTION58_SOLUTION1_H_
#define QUESTION58_SOLUTION1_H_

#include "questions/question58/Solution.hpp"

namespace Question58 {
int Solution1::lengthOfLastWord(std::string s) {
  int size = s.size();
  if (size == 0) {
    return 0;
  }

  int lastWordLength = 0;
  bool startedCounting = false;
  for (int i = size - 1; i >= 0; i--) {
    if (s[i] != ' ' && !startedCounting) {
      startedCounting = true;
    }

    if (startedCounting) {
      if (s[i] == ' ') {
        break;
      }
      lastWordLength++;
    }
  }

  return lastWordLength;
}
}  // namespace Question58

#endif