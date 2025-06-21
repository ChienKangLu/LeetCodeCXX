#ifndef QUESTION14_SOLUTION1_H_
#define QUESTION14_SOLUTION1_H_

#include "questions/question14/Solution.hpp"

namespace Question14 {
std::string Solution1::longestCommonPrefix(std::vector<std::string>& strs) {
  for (int i = 0; i < strs[0].size(); i++) {
    const auto c = strs[0][i];
    for (int j = 1; j < strs.size(); j++) {
      if (strs[j][i] != c || i == strs[j].size()) {
        // string::substr
        //    The substring is the portion of the object that starts at
        //    character position pos and spans len characters (or until the end
        //    of the string, whichever comes first).
        return strs[0].substr(0, i);
      }
    }
  }
  return strs[0];
}
}  // namespace Question14

#endif