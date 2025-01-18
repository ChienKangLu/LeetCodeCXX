#ifndef QUESTION274_SOLUTION1_H_
#define QUESTION274_SOLUTION1_H_

#include <algorithm>  // For std::sort

#include "questions/question274/Solution.hpp"

namespace Question274 {

int Solution1::hIndex(vector<int>& citations) {
  sort(citations.begin(), citations.end(), greater<int>());

  // After sorting, if citations[i]>i, then papers 0 to i all have at least i+1
  // citations.

  int i = 0;
  while (i < citations.size() && citations[i] > i) {
    i++;
  }
  return i;
}
}  // namespace Question274

#endif