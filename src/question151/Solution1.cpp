#ifndef QUESTION151_SOLUTION1_H_
#define QUESTION151_SOLUTION1_H_

#include <vector>

#include "questions/question151/Solution.hpp"

namespace Question151 {
std::string Solution1::reverseWords(std::string s) {
  std::string reversed{""};

  std::string word{};
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == ' ') {
      if (!word.empty()) {
        reversed = reversed.empty() ? word : word + " " + reversed;
        word.clear();
      }
    } else {
      word += s[i];
    }
  }

  if (!word.empty()) {
    reversed = reversed.empty() ? word : word + " " + reversed;
    word.clear();
  }
  return reversed;
}
}  // namespace Question151

#endif