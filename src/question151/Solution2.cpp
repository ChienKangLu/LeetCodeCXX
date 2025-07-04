#ifndef QUESTION151_SOLUTION2_H_
#define QUESTION151_SOLUTION2_H_

#include <algorithm>
#include <iterator>
#include <sstream>
#include <vector>

#include "questions/question151/Solution.hpp"

namespace Question151 {
std::string Solution2::reverseWords(std::string s) {
  s.erase(0, s.find_first_not_of(' '));  // Trim leading spaces
  s.erase(s.find_last_not_of(' ') + 1);  // Trim trailing spaces

  // Split the string into words
  std::istringstream iss(s);
  std::vector<std::string> words{};
  copy(std::istream_iterator<std::string>(iss),
       std::istream_iterator<std::string>(), back_inserter(words));

  // Reverse words
  reverse(words.begin(), words.end());

  // Join words
  std::string result{""};
  for (int i = 0; i < words.size(); i++) {
    if (i > 0) {
      result += " ";  // Add space between words
    }
    result += words[i];
  }
  return result;
}
}  // namespace Question151

#endif