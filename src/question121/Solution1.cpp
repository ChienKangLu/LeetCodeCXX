#ifndef QUESTION121_SOLUTION1_H_
#define QUESTION121_SOLUTION1_H_

#include <algorithm>

#include "questions/question121/Solution.hpp"

namespace Question121 {
int Solution1::maxProfit(vector<int>& prices) {
  int lowestBuyingPrice = INT_MAX;
  int profit = 0;

  for (const auto& price : prices) {
    if (price < lowestBuyingPrice) {
      lowestBuyingPrice = price;
    } else {
      profit = max(profit, price - lowestBuyingPrice);
    }
  }

  return profit;
}
}  // namespace Question121

#endif