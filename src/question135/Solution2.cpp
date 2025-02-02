#ifndef QUESTION135_SOLUTION2_H_
#define QUESTION135_SOLUTION2_H_

#include "questions/question135/Solution.hpp"

// Time complexity: O(n)
// Space complexity: O(n)
namespace Question135 {
int Solution2::candy(vector<int>& ratings) {
  const auto size = ratings.size();

  vector<int> left(size, 1);
  vector<int> right(size, 1);

  // left neighbor relation
  for (int i = 1; i < size; i++) {
    if (ratings[i] > ratings[i - 1]) {
      left[i] = left[i - 1] + 1;
    }
  }

  // right neighbor relation
  for (int i = size - 2; i >= 0; i--) {
    if (ratings[i] > ratings[i + 1]) {
      right[i] = right[i + 1] + 1;
    }
  }

  int sum = 0;

  for (int i = 0; i < size; i++) {
    sum += max(left[i], right[i]);
  }

  return sum;
}
}  // namespace Question135

#endif