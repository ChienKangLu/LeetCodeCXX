#ifndef QUESTIONS_MIN_STACK_SOLUTION_H_
#define QUESTIONS_MIN_STACK_SOLUTION_H_

#include <map>
#include <queue>

#include "MinStack.hpp"

class Solution1 : MinStack {
 public:
  void minstackPush(int val) override;

  void minstackPop() override;

  int minstackTop() override;

  int minstackGetMin() override;

 private:
  std::vector<int> data;
  std::map<int, int> countMap;
  std::priority_queue<int, std::vector<int>, std::greater<int>> minQueue;
};

#endif