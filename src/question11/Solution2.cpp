#ifndef QUESTION11_SOLUTION1_H_
#define QUESTION11_SOLUTION1_H_

#include "questions/question11/Solution.hpp"

namespace Question11 {
int Solution2::maxArea(vector<int>& height) {
  int maxArea = 0;
  int left = 0;
  int right = height.size() - 1;

  while (left < right) {
    int currentHeight = min(height[left], height[right]);
    int currentWidth = right - left;
    maxArea = max(maxArea, currentHeight * currentWidth);

    if (height[left] < height[right]) {
      left++;
    } else {
      right--;
    }
  }
  return maxArea;
}
}  // namespace Question11

#endif