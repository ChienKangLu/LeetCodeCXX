#ifndef QUESTION135_SOLUTION1_H_
#define QUESTION135_SOLUTION1_H_

#include "questions/question135/Solution.hpp"

// Time Limit Exceeded
// Time complexity: O(n^2)
// Space complexity: O(n)
namespace Question135 {
int Solution1::candy(vector<int>& ratings) {
  const auto size = ratings.size();
  vector<int> candies(size, 1);

  bool hasChanged = true;

  while (hasChanged) {
    hasChanged = false;
    for (int i = 0; i < size; i++) {
      if (i != size - 1 && ratings[i] > ratings[i + 1] &&
          candies[i] <= candies[i + 1]) {
        candies[i] = candies[i + 1] + 1;
        hasChanged = true;
      }
      if (i != 0 && ratings[i] > ratings[i - 1] &&
          candies[i] <= candies[i - 1]) {
        candies[i] = candies[i - 1] + 1;
        hasChanged = true;
      }
    }
  }

  int sum = 0;
  for (const auto candy : candies) {
    sum += candy;
  }
  return sum;
}
}  // namespace Question135

#endif