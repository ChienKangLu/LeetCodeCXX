#ifndef QUESTION134_SOLUTION1_H_
#define QUESTION134_SOLUTION1_H_

#include "questions/question134/Solution.hpp"

namespace Question134 {

int Solution1::canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
  const int size = gas.size();
  int currentGain = 0;
  int totalGain = 0;
  int startingPosition = 0;

  for (int i = 0; i < size; i++) {
    const int gain = gas[i] - cost[i];
    currentGain += gain;
    totalGain += gain;

    if (currentGain < 0) {
      startingPosition = i + 1;
      currentGain = 0;
    }
  }

  return totalGain >= 0 ? startingPosition : -1;
}
}  // namespace Question134

#endif