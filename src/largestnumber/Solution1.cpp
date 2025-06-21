#ifndef LARGEST_NUMBER_SOLUTION1_H_
#define LARGEST_NUMBER_SOLUTION1_H_

#include <algorithm>

#include "questions/largestnumber/Solution.hpp"

string Solution1::largestNumber(vector<int> &nums) {
  vector<string> s;
  for (const auto &num : nums) {
    s.push_back(to_string(num));
  }

  // Sort numbers by lexical order
  sort(s.begin(), s.end(), [](string &a, string &b) { return a + b > b + a; });

  if (s[0] == "0") {
    return "0";
  }

  string ans;
  for (const auto &it : s) {
    ans += it;
  }
  return ans;
}

#endif