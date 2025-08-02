#ifndef QUESTION11_SOLUTION1_H_
#define QUESTION11_SOLUTION1_H_

#include "questions/question11/Solution.hpp"

namespace Question11 {
int Solution1::maxArea(vector<int>& height) {
  int maxArea = 0;

  for (int left = 0; left < height.size(); ++left) {
    for (int right = left + 1; right < height.size(); ++right) {
      int width = right - left;
      int currentHeight = std::min(height[left], height[right]);
      maxArea = max(maxArea, width * currentHeight);
    }
  }

  return maxArea;
}
}  // namespace Question11

#endif