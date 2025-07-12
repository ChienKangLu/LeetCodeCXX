#ifndef QUESTION125_SOLUTION1_H_
#define QUESTION125_SOLUTION1_H_

#include <cctype>
#include <string>
#include <vector>

#include "questions/question125/Solution.hpp"

namespace Question125 {

bool Solution1::isPalindrome(string s) {
  vector<char> filtered;
  for (const auto& c : s) {
    if (isalpha(c)) {
      filtered.push_back(tolower(c));
    } else if (isdigit(c)) {
      filtered.push_back(c);
    }
  }

  int l = 0;
  int r = filtered.size() - 1;

  while (l <= r) {
    if (filtered[l] != filtered[r]) {
      return false;
    }

    l += 1;
    r -= 1;
  }

  return true;
}
}  // namespace Question125

#endif