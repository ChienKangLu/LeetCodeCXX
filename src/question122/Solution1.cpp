#ifndef QUESTION122_SOLUTION1_H_
#define QUESTION122_SOLUTION1_H_

#include <climits>

#include "questions/question122/Solution.hpp"

namespace Question122 {

int Solution1::maxProfit(vector<int>& prices) {
  int currentMin = INT_MAX;
  int currentMax = currentMin;
  int profit = 0;

  for (const auto& price : prices) {
    if (price < currentMax) {
      profit += currentMax - currentMin;
      currentMin = price;
      currentMax = currentMin;
    } else {
      currentMax = price;
    }
  }

  profit += currentMax - currentMin;

  return profit;
}
}  // namespace Question122

#endif