#ifndef QUESTION13_SOLUTION1_H_
#define QUESTION13_SOLUTION1_H_

#include <unordered_map>

#include "questions/question13/Solution.hpp"

namespace Question13 {

int Solution1::romanToInt(string s) {
  unordered_map<char, int> romanMap{{'I', 1},   {'V', 5},   {'X', 10},
                                    {'L', 50},  {'C', 100}, {'D', 500},
                                    {'M', 1000}};

  const auto size = s.size();
  int result = 0;

  for (int i = size - 1; i >= 0; i--) {
    int number = romanMap[s[i]];
    if (i < size - 1 && number < romanMap[s[i + 1]]) {
      number *= -1;
    }
    result += number;
  }
  return result;
}
}  // namespace Question13

#endif