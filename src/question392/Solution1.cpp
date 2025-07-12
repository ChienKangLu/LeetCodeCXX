#ifndef QUESTION392_SOLUTION1_H_
#define QUESTION392_SOLUTION1_H_

#include "questions/question392/Solution.hpp"

namespace Question392 {

bool Solution1::isSubsequence(string s, string t) {
  if (s.empty()) {
    return true;
  }

  int i = 0;
  for (const auto& c : t) {
    if (c == s[i]) {
      i++;
      if (i == s.size()) {
        return true;
      }
    }
  }

  return false;
}
}  // namespace Question392

#endif